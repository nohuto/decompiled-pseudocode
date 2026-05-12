/*
 * XREFs of sub_1401319E0 @ 0x1401319E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140131AB4 @ 0x140131AB4 (sub_140131AB4.c)
 *     sub_140131B14 @ 0x140131B14 (sub_140131B14.c)
 *     sub_140131F2C @ 0x140131F2C (sub_140131F2C.c)
 *     sub_140131FD4 @ 0x140131FD4 (sub_140131FD4.c)
 *     sub_140132F58 @ 0x140132F58 (sub_140132F58.c)
 */

__int64 __fastcall sub_1401319E0(__int32 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // r14d
  unsigned int v6; // esi
  int v7; // ebp
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rax

  v2 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      v5 = *(_DWORD *)(a2 + 76);
      _InterlockedExchange((volatile __int32 *)(a2 + 72), a1);
      LOBYTE(v8) = (*(_BYTE *)(v8 + 111) & 8) != 0;
      v9 = sub_140131FD4(*(unsigned int *)(a2 + 72), v8);
      v6 = v9;
      if ( v9 != v5 && v9 )
      {
        v7 = sub_140131B14(v9);
        v10 = sub_140131AB4(a2);
        if ( v10 )
        {
          *(_DWORD *)(v10 + 16) = v7;
          sub_140131F2C(a2, v10);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 264));
        }
        else
        {
          v2 = -1073741670;
        }
      }
    }
    else
    {
      v2 = -1073741584;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  return sub_140132F58(a2, a1, v5, v6, v7, v2);
}
