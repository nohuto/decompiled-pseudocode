/*
 * XREFs of sub_14007B620 @ 0x14007B620
 * Callers:
 *     sub_14007F0E0 @ 0x14007F0E0 (sub_14007F0E0.c)
 * Callees:
 *     sub_1400569C4 @ 0x1400569C4 (sub_1400569C4.c)
 *     sub_140058824 @ 0x140058824 (sub_140058824.c)
 *     sub_14007FC38 @ 0x14007FC38 (sub_14007FC38.c)
 */

bool __fastcall sub_14007B620(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  volatile __int32 *v7; // rbx
  int v10; // eax
  int v11; // r14d
  int v12; // eax
  int v13; // r8d
  bool v14; // di
  char v15; // dl
  int v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = (volatile __int32 *)&unk_1400E9770;
  if ( a4 )
    v7 = (volatile __int32 *)&unk_1400E9768;
  if ( (*v7 & 3) == 2 )
    return 0;
  if ( (*v7 & 2) != 0 )
  {
    *a5 = 1;
    return (unsigned int)sub_14007FC38(a1, a2, a3, 0LL) != 0;
  }
  else
  {
    v10 = sub_1400569C4();
    v16 = 0;
    v11 = v10;
    *a5 = 1;
    v12 = sub_14007FC38(a1, v6, v5, &v16);
    v13 = v16;
    v14 = v12 != 0;
    v15 = _InterlockedExchange(v7, (v16 != 0) + 6);
    if ( !v13 && (v15 & 4) == 0 )
      sub_140058824((__int64)&dword_1400E7BC8, v7, 0, v11);
    return v14;
  }
}
