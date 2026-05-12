/*
 * XREFs of sub_1400E5964 @ 0x1400E5964
 * Callers:
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400E7C34 @ 0x1400E7C34 (sub_1400E7C34.c)
 *     sub_1400EC40C @ 0x1400EC40C (sub_1400EC40C.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 */

void __fastcall sub_1400E5964(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v3; // r14
  int v4; // eax
  _DWORD *v5; // rsi
  unsigned __int16 i; // cx
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  char v14; // [rsp+E0h] [rbp+8h]
  char v15; // [rsp+E8h] [rbp+10h]
  __int64 v16; // [rsp+F0h] [rbp+18h] BYREF
  PVOID P; // [rsp+F8h] [rbp+20h] BYREF

  P = 0LL;
  v1 = 0;
  v16 = 0LL;
  v14 = 0;
  v3 = 0;
  v15 = 0;
  v4 = sub_1400E0B68(a1, 0, 2, 0, 0, &P);
  if ( v4 >= 0 )
  {
    v5 = P;
    for ( i = 0; i < 0x400u; ++i )
    {
      v7 = *((_DWORD *)P + i);
      if ( !v7 )
        break;
      if ( v7 <= v1 || v7 > *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL) )
      {
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFAFFFFuLL | 0x40000;
        sub_1400A870C(
          a1,
          1,
          2,
          (__int64)L"StartNamespaces - Invalid ids list",
          L"NN",
          *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
          L"CurrentMaxNSID",
          v1,
          L"NSID",
          v5[i],
          &dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0);
        goto LABEL_25;
      }
      v15 = v7;
      v1 = v7;
    }
    v8 = *(_QWORD *)(a1 + 136);
    if ( i )
    {
      *(_QWORD *)(a1 + 136) = v8 & 0xFFFFFFFFFFFDFFFFuLL;
      do
      {
        v9 = (unsigned int)v5[v3];
        if ( !(_DWORD)v9 )
          break;
        v10 = *(unsigned __int16 *)(a1 + 24);
        if ( (unsigned int)v9 <= v10 )
        {
          if ( !sub_1400EC40C(a1, v9) )
          {
            v12 = sub_1400F7E54(a1, (unsigned int)v5[v3], v11, &v16);
            if ( v12 >= 0 )
            {
              v13 = sub_1400E7C34(a1, v16);
              if ( v13 >= 0 )
              {
                _interlockedbittestandreset(*(volatile signed __int32 **)(v16 + 256), 2u);
                sub_1400A870C(
                  a1,
                  1,
                  4,
                  (__int64)L"StartNamespaces - Namespace added",
                  L"NSID",
                  v5[v3],
                  L"PathId",
                  *(_BYTE *)(v16 + 100),
                  L"TargetId",
                  *(_BYTE *)(v16 + 101),
                  L"Lun",
                  *(_BYTE *)(v16 + 102),
                  (void *)&dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0);
                v16 = 0LL;
                ++v14;
                v5 = P;
              }
              else
              {
                sub_1400A870C(
                  a1,
                  1,
                  3,
                  (__int64)L"StartNamespaces - Add namespace failure",
                  L"NSID",
                  v5[v3],
                  L"Status",
                  v13,
                  &dword_140149108,
                  0,
                  &dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0,
                  (void *)&dword_140149108,
                  0);
                sub_1400F82EC(&v16);
              }
            }
            else
            {
              sub_1400A870C(
                a1,
                1,
                3,
                (__int64)L"StartNamespaces - Create namespace failure",
                L"NSID",
                v5[v3],
                L"Status",
                v12,
                &dword_140149108,
                0,
                &dword_140149108,
                0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0,
                (void *)&dword_140149108,
                0);
            }
          }
        }
        else
        {
          sub_1400A870C(
            a1,
            1,
            3,
            (__int64)L"StartNamespaces - Skip namespace",
            L"NN",
            *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
            L"NamespaceCount",
            v10,
            L"NSID",
            v9,
            &dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0);
        }
        ++v3;
      }
      while ( v3 < 0x400u );
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 32LL), BusRelations);
      LOBYTE(v3) = v14;
    }
    else
    {
      *(_QWORD *)(a1 + 136) = v8 | 0x20000;
    }
    sub_1400A870C(
      a1,
      1,
      4,
      (__int64)L"StartNamespaces completed",
      L"NN",
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
      L"MaxNSID",
      v15,
      L"Count",
      v3,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    *(_QWORD *)(a1 + 136) &= ~0x10000uLL;
  }
  else
  {
    sub_1400A870C(
      a1,
      1,
      3,
      (__int64)L"StartNamespaces - getting active namespace ids failed",
      L"NtStatus",
      v4,
      L"NN",
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v5 = P;
  }
LABEL_25:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x52436152u);
}
