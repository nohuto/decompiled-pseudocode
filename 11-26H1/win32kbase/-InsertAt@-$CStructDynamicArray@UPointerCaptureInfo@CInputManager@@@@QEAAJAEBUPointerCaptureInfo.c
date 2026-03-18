/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x140165BB8
 * Callers:
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x140165A28 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z @ 0x140165CA4 (-Grow@-$CDynamicArray@PEAUPointerCaptureInfo@CInputManager@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  int v4; // r9d
  __int64 v5; // rbp
  _DWORD *v8; // rdi
  int v10; // esi
  _QWORD *v11; // r11
  __int64 v12; // r8
  __int64 v13; // r10

  v3 = (_DWORD *)(a1 + 8);
  v4 = 0;
  v5 = (unsigned int)a3;
  v8 = (_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v4 = CDynamicArray<CInputManager::PointerCaptureInfo *,2003858261>::Grow(a1, a2, a3, 0LL);
    if ( v4 < 0 )
      goto LABEL_6;
    v8 = (_DWORD *)(a1 + 8);
  }
  if ( *v3 >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
LABEL_6:
  v10 = v4;
  if ( v4 >= 0 )
  {
    v11 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 8uLL, 0x32644344u);
    if ( v11 )
    {
      v4 = v10;
      *v11 = *a2;
      v12 = (unsigned int)*v8;
      if ( (unsigned int)v12 > (unsigned int)v5 )
      {
        v13 = 8 * v12;
        do
        {
          v12 = (unsigned int)(v12 - 1);
          *(_QWORD *)(v13 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v12);
          v13 -= 8LL;
        }
        while ( (unsigned int)v12 > (unsigned int)v5 );
        v8 = (_DWORD *)(a1 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
      ++*v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v4;
}
