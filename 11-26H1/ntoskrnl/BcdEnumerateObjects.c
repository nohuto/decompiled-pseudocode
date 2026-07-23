/*
 * XREFs of BcdEnumerateObjects @ 0x140B6FB7C
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     BiIsEnumerateMatch @ 0x140897684 (BiIsEnumerateMatch.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetObjectDescription @ 0x1409A6BE0 (BiGetObjectDescription.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PULONG v5; // r12
  char *v6; // rsi
  char v8; // r15
  NTSTATUS v9; // eax
  NTSTATUS v10; // r8d
  PCWSTR *v12; // rdi
  int v13; // eax
  HANDLE v14; // r14
  NTSTATUS v15; // ebx
  int v16; // eax
  ULONG v17; // r15d
  __int64 v18; // r13
  const WCHAR **v19; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  char *v23; // r13
  ULONG v24; // esi
  ULONG v25; // r14d
  ULONG i; // r12d
  int v27; // ebx
  __int64 v28; // rax
  char v29; // [rsp+20h] [rbp-40h]
  ULONG v30; // [rsp+24h] [rbp-3Ch] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-38h] BYREF
  PCWSTR *v32; // [rsp+30h] [rbp-30h] BYREF
  __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  HANDLE v34; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  GUID *Guid; // [rsp+B0h] [rbp+50h]

  Guid = (GUID *)Buffer;
  v33 = 0LL;
  v5 = BufferSize;
  Handle = 0LL;
  v6 = (char *)Buffer;
  v30 = 0;
  DestinationString = 0LL;
  if ( !Buffer && *BufferSize || !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  v8 = (unsigned __int8)BcdStoreHandle & 1;
  v29 = (unsigned __int8)BcdStoreHandle & 1;
  v9 = BiAcquireBcdSyncMutant((unsigned __int8)BcdStoreHandle & 1);
  if ( v9 >= 0 )
  {
    v34 = 0LL;
    v32 = 0LL;
    v12 = 0LL;
    v13 = BiOpenKey((unsigned __int64)BcdStoreHandle, L"Objects", 0x20019u, &v34);
    v14 = v34;
    v15 = v13;
    if ( v13 >= 0 )
    {
      v16 = BiEnumerateSubKeys((unsigned __int64)v34, &v32, &v30);
      v12 = v32;
      v15 = v16;
      if ( v16 >= 0 )
      {
        v17 = 0;
        if ( v30 )
        {
          v18 = v30;
          v19 = v32;
          do
          {
            if ( (int)BiOpenKey((unsigned __int64)v14, *v19, 0x20019u, &Handle) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)Handle, &v33);
              BiCloseKey(Handle);
              if ( ObjectDescription >= 0 && BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v33)) )
                ++v17;
            }
            ++v19;
            --v18;
          }
          while ( v18 );
          v5 = BufferSize;
          v6 = (char *)Guid;
        }
        v21 = 24LL * v17;
        if ( v21 > 0xFFFFFFFF
          || (v22 = 8LL * v17, v23 = &v6[(unsigned int)v21], v22 > 0xFFFFFFFF)
          || (v24 = v22 + v21, LODWORD(v32) = v22 + v21, (int)v22 + (int)v21 < (unsigned int)v21) )
        {
          v15 = -1073741675;
        }
        else if ( v24 <= *v5 )
        {
          v25 = 0;
          if ( v30 )
          {
            for ( i = 0; i < v30; ++i )
            {
              if ( v25 >= v17 )
                break;
              if ( (int)BiOpenKey((unsigned __int64)v34, v12[i], 0x20019u, &Handle) >= 0 )
              {
                v27 = BiGetObjectDescription((__int64)Handle, &v33);
                BiCloseKey(Handle);
                if ( v27 >= 0 && BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v33)) )
                {
                  RtlInitUnicodeString(&DestinationString, v12[i]);
                  if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                  {
                    v28 = v33;
                    *(_QWORD *)&Guid[1].Data1 = v23;
                    *(_QWORD *)v23 = v28;
                    v23 += 8;
                    ++v25;
                    Guid = (GUID *)((char *)Guid + 24);
                  }
                }
              }
            }
            v24 = (unsigned int)v32;
            v5 = BufferSize;
          }
          v15 = 0;
          *v5 = v24;
          *ObjectCount = v25;
          v14 = v34;
        }
        else
        {
          v15 = -1073741789;
          *v5 = v24;
          *ObjectCount = v17;
        }
        v8 = v29;
      }
    }
    if ( v14 )
      BiCloseKey(v14);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x4B444342u);
    BiReleaseBcdSyncMutant(v8);
    return v15;
  }
  else
  {
    BiLogMessage(4LL, L"BcdEnumerateObjects: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v9);
    return v10;
  }
}
