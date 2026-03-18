/*
 * XREFs of ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1401F208C
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vDeleteCache(RFONTOBJ *this)
{
  __int64 v1; // rsi
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rbx

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD **)(*(_QWORD *)this + 536LL);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      if ( !v3 )
        break;
      Win32FreePool(v4);
    }
    Win32FreePool(*(void **)(*(_QWORD *)this + 480LL));
  }
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v5 = *(_QWORD **)(v1 + 568);
  if ( v5 )
  {
    do
    {
      v7 = (_QWORD *)*v5;
      Win32FreePool(v5);
      v5 = v7;
    }
    while ( v7 );
    *(_QWORD *)(v1 + 568) = 0LL;
  }
  v6 = *(void **)(*(_QWORD *)this + 616LL);
  if ( v6 )
  {
    Win32FreePool(v6);
    *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
  }
}
