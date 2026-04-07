/*
 * XREFs of ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x1800321C8
 * Callers:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180032004 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 * Callees:
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x1800896C8 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CStoryboard::_InvokeWindowEnumCallback(CStoryboard *a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // ebp
  char v9; // bl
  __int64 i; // rsi

  *a4 = 0;
  v5 = *(_DWORD *)(a2 + 744) & 0xFFF;
  v9 = 1;
  if ( v5 != 4095 )
  {
    for ( i = 0LL;
          (unsigned int)i < *(_DWORD *)((*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 4);
          i = (unsigned int)(i + 1) )
    {
      if ( v5 == *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 8)
                           + 4 * i)
        || (*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 72LL))(a1)
        && CStoryboard::_HasUsableBitmapResource(a1, *(HWND *)(a2 + 40)) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 136LL))(
                a1,
                a2,
                a3,
                a4)
          || *a4 < 0 )
        {
          return 0;
        }
        return v9;
      }
    }
  }
  return v9;
}
