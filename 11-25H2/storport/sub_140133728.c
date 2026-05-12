/*
 * XREFs of sub_140133728 @ 0x140133728
 * Callers:
 *     Callback @ 0x140045BD0 (Callback.c)
 * Callees:
 *     sub_140131AB4 @ 0x140131AB4 (sub_140131AB4.c)
 *     sub_140131B14 @ 0x140131B14 (sub_140131B14.c)
 *     sub_140131F2C @ 0x140131F2C (sub_140131F2C.c)
 *     sub_140131FD4 @ 0x140131FD4 (sub_140131FD4.c)
 *     sub_140132DA8 @ 0x140132DA8 (sub_140132DA8.c)
 */

void __fastcall sub_140133728(__int64 a1)
{
  int v1; // ebx
  int v3; // r13d
  char v4; // r14
  int v5; // r12d
  char v6; // bp
  __int64 v7; // r15
  int *v8; // rdi
  int v9; // eax
  __int64 v10; // rax

  LOBYTE(v1) = 0;
  LOBYTE(v3) = 0;
  v4 = 0;
  LOBYTE(v5) = 0;
  v6 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = (int *)(a1 + 72);
    if ( v7 )
    {
      v3 = *(_DWORD *)(a1 + 76);
      v9 = sub_140131FD4(*v8, (*(_BYTE *)(v7 + 111) & 8) != 0);
      v4 = v9;
      if ( v9 != v3 && v9 )
      {
        v5 = sub_140131B14(v9);
        v10 = sub_140131AB4(a1);
        if ( v10 )
        {
          *(_DWORD *)(v10 + 16) = v5;
          sub_140131F2C(a1, (struct _LIST_ENTRY *)v10);
          if ( (*(_BYTE *)(v7 + 111) & 8) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 268));
        }
        else
        {
          v6 = -102;
        }
      }
    }
    else
    {
      v6 = -16;
    }
    v1 = *v8;
  }
  else
  {
    v6 = 13;
  }
  sub_140132DA8(a1, v1, v3, v4, v5, v6);
}
