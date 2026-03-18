/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x140088120
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InternalMapVirtualKeyEx @ 0x140088250 (InternalMapVirtualKeyEx.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r8

  v6 = a4;
  EnterSharedCrit(0LL, 1LL, a3, a4);
  v8 = 0;
  v11 = PtiCurrent(v10, v9);
  if ( v6 )
  {
    v14 = *((_QWORD *)v11 + 59);
    v15 = 0LL;
    if ( v14 )
    {
      v16 = *((_QWORD *)v11 + 59);
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(v16 + 16);
            if ( (*(_DWORD *)(v16 + 32) & 0x20000000) == 0 )
              break;
            if ( v16 == v14 )
              goto LABEL_20;
          }
        }
        else
        {
          if ( (a3 & 0xFFFF0000) != 0 )
          {
            do
            {
              if ( *(_QWORD *)(v16 + 40) == a3 )
              {
                if ( *(int *)(v16 + 32) >= 0 )
                  goto LABEL_8;
                v15 = v16;
              }
              v16 = *(_QWORD *)(v16 + 16);
            }
            while ( v16 != v14 );
          }
          else
          {
            do
            {
              if ( *(_WORD *)(v16 + 40) == (_WORD)a3 )
              {
                if ( *(int *)(v16 + 32) >= 0 )
                  goto LABEL_8;
                v15 = v16;
              }
              v16 = *(_QWORD *)(v16 + 16);
            }
            while ( v16 != v14 );
          }
          v16 = v15;
        }
      }
      else
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v16 + 24);
          if ( (*(_DWORD *)(v16 + 32) & 0x20000000) == 0 )
            break;
          if ( v16 == v14 )
            goto LABEL_20;
        }
      }
    }
    else
    {
LABEL_20:
      v16 = 0LL;
    }
  }
  else
  {
    v16 = *((_QWORD *)v11 + 59);
  }
LABEL_8:
  if ( v16 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL));
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v16, v14);
  return v8;
}
