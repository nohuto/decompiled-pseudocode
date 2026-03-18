/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1401ADB3C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetCoreWindow @ 0x14029E790 (NtUserSetCoreWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 */

LONG_PTR __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, int a2)
{
  LONG_PTR result; // rax
  struct tagWND *v5; // rbx
  char v6; // bp

  result = a2 != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x200u) >> 9 != (_DWORD)result
    && ((*(_DWORD *)(a1 + 380) & 0x1000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, (struct tagWND *)a1, 0xD902u, 1);
    v5 = *(struct tagWND **)(a1 + 112);
    if ( v5 )
    {
LABEL_6:
      while ( v5 != (struct tagWND *)a1 )
      {
        if ( (*(_DWORD *)(a1 + 380) & 0x1000) == 0 || a2 )
        {
          v6 = 0;
          SetOrClrWF(a2, v5, 0xD902u, 1);
        }
        else
        {
          v6 = 1;
        }
        result = *((_QWORD *)v5 + 14);
        if ( !result || v6 )
        {
          result = *((_QWORD *)v5 + 11);
          if ( !result )
          {
            while ( 1 )
            {
              v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
              if ( !v5 )
                return result;
              result = *((_QWORD *)v5 + 11);
              if ( result )
                break;
              if ( v5 == (struct tagWND *)a1 )
                goto LABEL_6;
            }
          }
        }
        v5 = (struct tagWND *)result;
      }
    }
  }
  return result;
}
