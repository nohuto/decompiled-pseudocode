/*
 * XREFs of BcdEnumerateObjects @ 0x140B5C474
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     BiIsEnumerateMatch @ 0x140891288 (BiIsEnumerateMatch.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     BiEnumerateSubKeys @ 0x1409D1680 (BiEnumerateSubKeys.c)
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiGetObjectDescription @ 0x1409D5C00 (BiGetObjectDescription.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdEnumerateObjects(unsigned __int64 a1, _DWORD *a2, GUID *a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int *v5; // r12
  GUID *v6; // rsi
  char v8; // r15
  int v9; // eax
  unsigned int v10; // r8d
  PCWSTR *v12; // rdi
  int v13; // eax
  HANDLE v14; // r14
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // r13
  const WCHAR **v19; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r13
  unsigned int v24; // esi
  unsigned int v25; // r14d
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

  Guid = a3;
  v33 = 0LL;
  v5 = a4;
  Handle = 0LL;
  v6 = a3;
  v30 = 0;
  DestinationString = 0LL;
  if ( !a3 && *a4 || !a5 || !*a2 )
    return 3221225485LL;
  v8 = a1 & 1;
  v29 = a1 & 1;
  v9 = BiAcquireBcdSyncMutant(a1 & 1);
  if ( v9 >= 0 )
  {
    v34 = 0LL;
    v32 = 0LL;
    v12 = 0LL;
    v13 = BiOpenKey(a1, L"Objects", 0x20019u, &v34);
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
              if ( ObjectDescription >= 0 && BiIsEnumerateMatch(a2[1], HIDWORD(v33)) )
                ++v17;
            }
            ++v19;
            --v18;
          }
          while ( v18 );
          v5 = a4;
          v6 = Guid;
        }
        v21 = 24LL * v17;
        if ( v21 > 0xFFFFFFFF
          || (v22 = 8LL * v17, v23 = (_QWORD *)((char *)&v6->Data1 + (unsigned int)v21), v22 > 0xFFFFFFFF)
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
                if ( v27 >= 0 && BiIsEnumerateMatch(a2[1], HIDWORD(v33)) )
                {
                  RtlInitUnicodeString(&DestinationString, v12[i]);
                  if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                  {
                    v28 = v33;
                    *(_QWORD *)&Guid[1].Data1 = v23;
                    *v23++ = v28;
                    ++v25;
                    Guid = (GUID *)((char *)Guid + 24);
                  }
                }
              }
            }
            v24 = (unsigned int)v32;
            v5 = a4;
          }
          v15 = 0;
          *v5 = v24;
          *a5 = v25;
          v14 = v34;
        }
        else
        {
          v15 = -1073741789;
          *v5 = v24;
          *a5 = v17;
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
