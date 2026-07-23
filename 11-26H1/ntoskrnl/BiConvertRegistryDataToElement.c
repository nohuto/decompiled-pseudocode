/*
 * XREFs of BiConvertRegistryDataToElement @ 0x140B66674
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BiResolveLocateDevice @ 0x140897718 (BiResolveLocateDevice.c)
 *     BiResolveLocate @ 0x14089933C (BiResolveLocate.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140B4CCC4 (BiConvertBootEnvironmentDeviceToElement.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        void *a1,
        const WCHAR *a2,
        unsigned int a3,
        unsigned int a4,
        __int16 a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // edi
  const WCHAR *v11; // r15
  unsigned int v13; // esi
  int v14; // ebx
  GUID *v15; // rcx
  GUID *v16; // rcx
  __int64 v17; // r9
  const wchar_t *v18; // rdx
  GUID *v19; // r12
  unsigned int v20; // ecx
  __int64 v21; // rax
  char v22; // r12
  __int64 v23; // rbx
  GUID *v24; // rdi
  unsigned int *v25; // rdi
  __int64 v26; // rdx
  GUID *v27; // rbx
  size_t Size; // [rsp+30h] [rbp-30h] BYREF
  PVOID Src; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp+48h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = a3;
  P = 0LL;
  v33 = 0;
  Src = 0LL;
  v11 = a2;
  LODWORD(Size) = 0;
  v13 = 0;
  DestinationString = 0LL;
  switch ( HIBYTE(a4) & 0xF )
  {
    case 1:
      v17 = 28LL;
      if ( a3 < 0x1C )
      {
        v18 = L"Insufficient length for BCD element. Length %lu Required %lu DataType: %lu";
        goto LABEL_27;
      }
      v17 = *((unsigned int *)a2 + 6) + 16LL;
      if ( v17 != a3 )
      {
        v18 = L"Unexpected length for BCD element. Length %lu Expected: %lu DataType: %lu";
        goto LABEL_27;
      }
      v14 = BiConvertBootEnvironmentDeviceToElement((_DWORD *)a2 + 4, a4, a5, (__int64 *)&P, &v33);
      if ( v14 < 0 )
      {
        v13 = v33;
        goto LABEL_72;
      }
      v25 = (unsigned int *)P;
      if ( *(_DWORD *)P == 8 )
      {
        if ( (a5 & 0x100) != 0 )
        {
          if ( (int)BiResolveLocate((__int64)P, a1, (__int64)&Src, (unsigned int *)&Size) >= 0 )
          {
            ExFreePoolWithTag(v25, 0x4B444342u);
            v25 = (unsigned int *)Src;
            v13 = Size;
            Src = 0LL;
LABEL_68:
            if ( v13 > *v7 )
            {
              v14 = -1073741789;
              ExFreePoolWithTag(v25, 0x4B444342u);
              goto LABEL_73;
            }
            v27 = Guid;
            memmove(Guid, v25, v13);
            *(GUID *)&v27->Data2 = *(GUID *)v11;
            ExFreePoolWithTag(v25, 0x4B444342u);
            goto LABEL_15;
          }
        }
        else if ( (int)BiResolveLocateDevice((__int64)a1, (__int64)P) >= 0 )
        {
          v26 = v25[6];
          v13 = v33 - v26;
          memmove(v25, (char *)v25 + v26, v33 - (unsigned int)v26);
          goto LABEL_68;
        }
      }
      v13 = v33;
      goto LABEL_68;
    case 2:
      if ( a3 && (a3 & 1) == 0 )
      {
        v22 = 0;
        v13 = a3;
        v23 = a3;
        if ( *(const WCHAR *)((char *)a2 + a3 - 2) )
        {
          v9 = a3 + 2;
          v22 = 1;
          v13 = a3 + 2;
        }
        if ( v9 > *a7 )
          goto LABEL_12;
        v24 = Guid;
        memmove(Guid, a2, a3);
        if ( v22 )
          *(_WORD *)((char *)&v24->Data1 + v23) = 0;
LABEL_15:
        v14 = 0;
        goto LABEL_73;
      }
      goto LABEL_43;
    case 3:
      v13 = 16;
      if ( *a7 < 0x10 )
        goto LABEL_12;
      if ( a3 >= 2 && (a3 & 1) == 0 )
      {
        a2[((unsigned __int64)a3 >> 1) - 1] = 0;
        RtlInitUnicodeString(&DestinationString, a2);
        v14 = RtlGUIDFromString(&DestinationString, Guid);
        if ( v14 >= 0 )
          goto LABEL_15;
LABEL_72:
        if ( v14 != -1073741789 )
          return (unsigned int)v14;
LABEL_73:
        *v7 = v13;
        return (unsigned int)v14;
      }
LABEL_43:
      BiLogMessage(4LL, L"String not multiple of WCHAR. Length %lu DataType: %lu");
      return (unsigned int)-1073741788;
    case 4:
      v19 = Guid;
      v20 = 0;
      v33 = 0;
      v14 = 0;
      if ( a3 >= 2 && (a3 & 1) == 0 )
      {
        a2[((unsigned __int64)a3 >> 1) - 1] = 0;
        if ( *a2 )
        {
          do
          {
            if ( v20 >= v9 )
              break;
            v8 += 16;
            v13 = v8;
            if ( v8 <= *v7 )
            {
              RtlInitUnicodeString(&DestinationString, v11);
              v14 = RtlGUIDFromString(&DestinationString, v19);
              if ( v14 < 0 )
                goto LABEL_72;
              v20 = v33;
              ++v19;
            }
            v21 = -1LL;
            do
              ++v21;
            while ( v11[v21] );
            v20 += 2 * v21 + 2;
            v33 = v20;
            v11 += (unsigned int)(v21 + 1);
          }
          while ( *v11 );
        }
        if ( v13 > *v7 )
          v14 = -1073741789;
        goto LABEL_73;
      }
      goto LABEL_43;
    case 5:
      v13 = 8;
      if ( a3 <= 8 )
      {
        if ( *a7 < 8 )
          goto LABEL_12;
        v15 = Guid;
        *(_QWORD *)&Guid->Data1 = 0LL;
        goto LABEL_14;
      }
      v17 = 8LL;
      v18 = L"Exceeded length for BCD element. Length %lu Expected: %lu DataType: %lu";
LABEL_27:
      BiLogMessage(4LL, v18, a3, v17, a4);
      return (unsigned int)-1073741788;
    case 6:
      if ( a3 != 1 )
      {
        BiLogMessage(4LL, L"Unexpected length for BCD element. Length %lu Expected: %lu DataType: %lu", a3);
        return (unsigned int)-1073741788;
      }
      v13 = 2;
      if ( *a7 < 2 )
        goto LABEL_12;
      v16 = Guid;
      BYTE1(Guid->Data1) = 0;
      LOBYTE(v16->Data1) = *(_BYTE *)a2 != 0;
      goto LABEL_15;
    case 7:
      if ( !a3 || (a3 & 7) != 0 )
        goto LABEL_9;
      v13 = a3;
      if ( *a7 < a3 )
        goto LABEL_12;
LABEL_13:
      v15 = Guid;
LABEL_14:
      memmove(v15, a2, a3);
      goto LABEL_15;
  }
  if ( a3 )
  {
    v13 = a3;
    if ( a3 > *a7 )
    {
LABEL_12:
      v14 = -1073741789;
      goto LABEL_73;
    }
    goto LABEL_13;
  }
LABEL_9:
  BiLogMessage(4LL, L"Unexpected length for BCD element. Length %lu DataType: %lu");
  return (unsigned int)-1073741788;
}
