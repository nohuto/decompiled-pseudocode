/*
 * XREFs of ?IsDesktopVisibleInternal@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1801D3990
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CImmersiveMode::IsDesktopVisibleInternal(CImmersiveMode *this, struct IUnknown *a2, int *a3)
{
  int v3; // ebx
  unsigned __int64 i; // rdi

  v3 = 0;
  *a3 = 0;
  if ( a2 )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 42); ++i )
    {
      if ( SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 41) + 8 * i), a2) )
      {
        _mm_lfence();
        LOBYTE(v3) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 41) + 8 * i) + 12LL) != 0;
        *a3 = v3;
        return 0LL;
      }
    }
  }
  else
  {
    LOBYTE(v3) = *((_BYTE *)this + 292) != 0;
    *a3 = v3;
  }
  return 0LL;
}
