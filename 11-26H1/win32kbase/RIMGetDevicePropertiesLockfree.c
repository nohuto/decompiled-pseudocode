/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x14016D560
 * Callers:
 *     RIMGetDeviceProperties @ 0x14016D2C0 (RIMGetDeviceProperties.c)
 *     NtRIMGetDevicePropertiesLockfree @ 0x1401FF180 (NtRIMGetDevicePropertiesLockfree.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     rimCopyInstancePathFromRimDev @ 0x1401FE9EC (rimCopyInstancePathFromRimDev.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlWriteUCharToUser @ 0x1402D22D4 (RtlWriteUCharToUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1402D23A8 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(char *a1, char *a2, int a3)
{
  int v5; // r14d
  char *v6; // rsi
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r12d
  PVOID Object[2]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length[2]; // [rsp+30h] [rbp-58h] BYREF
  volatile void *Address[2]; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 Src; // [rsp+A8h] [rbp+20h] BYREF

  Object[0] = 0LL;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 1u, 1, Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object[0];
    if ( Object[0] )
      v6 = (char *)Object[0] + 72;
    Object[1] = v6;
    LODWORD(Src) = 0;
    *(_OWORD *)Length = 0LL;
    *(_OWORD *)Address = 0LL;
    v17 = 0LL;
    if ( a3 )
    {
      RtlCopyFromUser(Length, a2, 0x28uLL);
      v7 = Length[0];
    }
    else
    {
      v7 = *(_DWORD *)a2;
    }
    if ( v7 == 4 )
    {
      v8 = (*((unsigned __int16 *)v6 + 96) >> 1) + 1;
      if ( a3 )
      {
        if ( !Address[0] )
        {
          RtlWriteULongToUser(a2 + 8, v8);
          goto LABEL_43;
        }
        if ( LODWORD(Length[1]) >= v8 && v8 > 2 )
        {
          ProbeForWrite(Address[0], LODWORD(Length[1]), 4u);
          rimCopyInstancePathFromRimDev(Address[0], v6, v8);
          goto LABEL_43;
        }
      }
      else
      {
        v9 = *((_QWORD *)a2 + 2);
        if ( !v9 )
        {
          *((_DWORD *)a2 + 2) = v8;
LABEL_43:
          ObfDereferenceObject(Object[0]);
          return (unsigned int)v5;
        }
        if ( *((_DWORD *)a2 + 2) >= v8 && v8 > 2 )
        {
          rimCopyInstancePathFromRimDev(v9, v6, v8);
          goto LABEL_43;
        }
      }
    }
    else
    {
      if ( v7 != 5 )
      {
        if ( v7 == 6 )
        {
          if ( a3 )
            RtlWriteUCharToUser(a2 + 8, (unsigned int)-__CFSHR__(*((_DWORD *)v6 + 42), 14));
          else
            a2[8] = -__CFSHR__(*((_DWORD *)v6 + 42), 14);
        }
        else
        {
          v10 = *((_DWORD *)v6 + 12);
          if ( v10 == 1 )
          {
            if ( a3 )
            {
              RtlWriteULongToUser(a2, 1LL);
              RtlCopyToUser(a2 + 8, v6 + 440, 0x1CuLL);
            }
            else
            {
              *(_DWORD *)a2 = 1;
              *(_OWORD *)(a2 + 8) = *(_OWORD *)(v6 + 440);
              *((_QWORD *)a2 + 3) = *((_QWORD *)v6 + 57);
              *((_DWORD *)a2 + 8) = *((_DWORD *)v6 + 116);
            }
          }
          else if ( v10 )
          {
            if ( v10 == 2 )
            {
              v11 = 0LL;
              Src = 0LL;
              v12 = 0;
              if ( *((_DWORD *)v6 + 332) )
              {
                v11 = *(_QWORD *)(v6 + 1860);
                Src = v11;
                v12 = *((_DWORD *)v6 + 468);
              }
              if ( a3 )
              {
                RtlWriteULongToUser(a2, 3LL);
                RtlWriteUShortToUser(a2 + 8, *(unsigned __int16 *)(*((_QWORD *)v6 + 55) + 110LL));
                RtlWriteUShortToUser(a2 + 10, *(unsigned __int16 *)(*((_QWORD *)v6 + 55) + 112LL));
                RtlWriteUShortToUser(a2 + 12, *(unsigned __int16 *)(*((_QWORD *)v6 + 55) + 114LL));
                RtlCopyToUser(a2 + 16, &Src, 8uLL);
                RtlWriteULongToUser(a2 + 24, v12);
              }
              else
              {
                *(_DWORD *)a2 = 3;
                *((_WORD *)a2 + 4) = *(_WORD *)(*((_QWORD *)v6 + 55) + 110LL);
                *((_WORD *)a2 + 5) = *(_WORD *)(*((_QWORD *)v6 + 55) + 112LL);
                *((_WORD *)a2 + 6) = *(_WORD *)(*((_QWORD *)v6 + 55) + 114LL);
                *((_QWORD *)a2 + 2) = v11;
                *((_DWORD *)a2 + 6) = v12;
              }
            }
          }
          else if ( a3 )
          {
            RtlWriteULongToUser(a2, 2LL);
            RtlCopyToUser(a2 + 8, v6 + 440, 0xCuLL);
          }
          else
          {
            *(_DWORD *)a2 = 2;
            *((_QWORD *)a2 + 1) = *((_QWORD *)v6 + 55);
            *((_DWORD *)a2 + 4) = *((_DWORD *)v6 + 112);
          }
        }
        goto LABEL_43;
      }
      if ( (*((_DWORD *)v6 + 46) & 0x80u) != 0 )
      {
        if ( a3 )
          RtlWriteULong64ToUser(a2 + 8, *(_QWORD *)(*((_QWORD *)v6 + 57) + 792LL));
        else
          *((_QWORD *)a2 + 1) = *(_QWORD *)(*((_QWORD *)v6 + 57) + 792LL);
        goto LABEL_43;
      }
    }
    v5 = -1073741811;
    goto LABEL_43;
  }
  return (unsigned int)v5;
}
