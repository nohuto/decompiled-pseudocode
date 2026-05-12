/*
 * XREFs of sub_1400E00D0 @ 0x1400E00D0
 * Callers:
 *     sub_1400E22C0 @ 0x1400E22C0 (sub_1400E22C0.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400E7C34 @ 0x1400E7C34 (sub_1400E7C34.c)
 *     sub_1400EC40C @ 0x1400EC40C (sub_1400EC40C.c)
 *     sub_1400F7344 @ 0x1400F7344 (sub_1400F7344.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 *     sub_1400F82EC @ 0x1400F82EC (sub_1400F82EC.c)
 *     sub_14010362C @ 0x14010362C (sub_14010362C.c)
 */

void __fastcall sub_1400E00D0(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // edi
  __int64 v6; // r8
  char *v7; // rsi
  unsigned int v8; // eax
  char v9; // si
  int v10; // eax
  char *v11; // rdi
  int v12; // eax
  int v13; // eax
  __int64 *v14; // r14
  PVOID P[2]; // [rsp+A0h] [rbp-28h] BYREF
  char *v16; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a2;
  P[0] = 0LL;
  v16 = (char *)sub_1400EC40C(a1, a2);
  v7 = v16;
  if ( v16 )
  {
    v13 = sub_1400E0B68(a1, v3, 0, 0, v16[60], (__int64)P);
    v14 = (__int64 *)P[0];
    if ( v13 < 0 || (unsigned __int8)sub_1400F7344(P[0]) )
    {
      *((_QWORD *)v7 + 14) &= ~2uLL;
      sub_14010362C(v7);
      *a3 = 1;
      sub_1400A870C(
        a1,
        1,
        4,
        (__int64)L"UpdateNamespace - Namespace removed",
        L"NSID",
        v3,
        &dword_140149108,
        0,
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
    else
    {
      sub_1400A870C(
        a1,
        1,
        4,
        (__int64)L"UpdateNamespace - Namespace updated",
        L"NSID",
        v3,
        L"Previous NSZE",
        **((_QWORD **)v7 + 22),
        L"New NSZE",
        *v14,
        L"Previous NCAP",
        *(_QWORD *)(*((_QWORD *)v7 + 22) + 8LL),
        L"New NCAP",
        v14[1],
        L"Previous NUSE",
        *(_QWORD *)(*((_QWORD *)v7 + 22) + 16LL),
        L"New NUSE",
        v14[2],
        (void *)&dword_140149108,
        0);
      _InterlockedExchange64(*((volatile __int64 **)v7 + 22), *v14);
      _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v7 + 22) + 8LL), v14[1]);
      _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v7 + 22) + 16LL), v14[2]);
      v14 = (__int64 *)P[0];
    }
    if ( v14 )
      ExFreePoolWithTag(v14, 0x52436152u);
  }
  else
  {
    v8 = *(unsigned __int16 *)(a1 + 24);
    v9 = v3;
    if ( v3 <= v8 )
    {
      v10 = sub_1400F7E54(a1, v3, v6, &v16);
      if ( v10 >= 0 )
      {
        v11 = v16;
        v12 = sub_1400E7C34(a1, v16);
        if ( v12 >= 0 )
        {
          _interlockedbittestandreset(*((volatile signed __int32 **)v11 + 32), 2u);
          sub_1400A870C(
            a1,
            1,
            4,
            (__int64)L"UpdateNamespace - Namespace added",
            L"NSID",
            v9,
            L"PathId",
            v16[100],
            L"TargetId",
            v16[101],
            L"Lun",
            v16[102],
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0);
          *a3 = 1;
        }
        else
        {
          sub_1400A870C(
            a1,
            1,
            3,
            (__int64)L"UpdateNamespace - Add namespace failure",
            L"NSID",
            v9,
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
          sub_1400F82EC(&v16);
        }
      }
      else
      {
        sub_1400A870C(
          a1,
          1,
          3,
          (__int64)L"UpdateNamespace - Create namespace failure",
          L"NSID",
          v3,
          L"Status",
          v10,
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
    else
    {
      sub_1400A870C(
        a1,
        1,
        3,
        (__int64)L"UpdateNamespace - Skip namespace",
        L"NN",
        *(_DWORD *)(*(_QWORD *)(a1 + 592) + 516LL),
        L"NamespaceCount",
        v8,
        L"NSID",
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
    }
  }
}
