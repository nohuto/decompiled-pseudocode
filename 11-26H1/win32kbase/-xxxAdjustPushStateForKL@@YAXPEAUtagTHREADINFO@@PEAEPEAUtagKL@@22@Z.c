/*
 * XREFs of ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x140123000
 * Callers:
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x140122EB8 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x14019C20C (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 */

void __fastcall xxxAdjustPushStateForKL(
        struct tagTHREADINFO *a1,
        unsigned __int8 *a2,
        struct tagKL *a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  __int64 v5; // rax
  unsigned __int8 *v9; // rbx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r9
  unsigned __int8 v12; // r10
  unsigned __int8 v13; // r11

  v5 = *((_QWORD *)a3 + 6);
  if ( v5 )
  {
    if ( *((_QWORD *)a4 + 6) )
    {
      v9 = ***(unsigned __int8 ****)(v5 + 32);
      v10 = *v9;
      if ( *v9 )
      {
        v11 = *v9;
        do
        {
          v12 = 0;
          v13 = 0;
          if ( ((unsigned __int8)(1 << (v10 & 7)) & a2[(unsigned __int64)v11 >> 3]) == 0 )
          {
            switch ( v10 )
            {
              case 0x10u:
                v12 = -96;
                v13 = -95;
                break;
              case 0x11u:
                v12 = -94;
                v13 = -93;
                break;
              case 0x12u:
                v12 = -92;
                v13 = -91;
                break;
            }
            xxxAdjustPushState(a1, v12, v13, a4, a5);
            a2[(unsigned __int64)*v9 >> 3] |= 1 << (*v9 & 7);
          }
          v9 += 2;
          v10 = *v9;
          v11 = *v9;
        }
        while ( *v9 );
      }
    }
  }
}
