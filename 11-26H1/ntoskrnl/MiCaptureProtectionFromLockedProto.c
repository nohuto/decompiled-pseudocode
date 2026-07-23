/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x1404AD594
 * Callers:
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    do
    {
      v2 = *a1;
      if ( (*a1 & 1) == 0 )
      {
        v3 = v2 >> 5;
        return v3 & 0x1F;
      }
      v5 = (v2 >> 12) & 0xFFFFFFFFFFLL;
      v6 = 48 * v5;
    }
    while ( v5 > qword_140E2D920 || ((*(_QWORD *)(v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 );
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( *(__int64 *)(v6 - 0x21FFFFFFFFE8LL) < 0 );
    }
    if ( v2 == *a1 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v6 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v3 = *(_QWORD *)(v6 - 0x21FFFFFFFFF0LL) >> 5;
  _InterlockedAnd64((volatile signed __int64 *)(v6 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  return v3 & 0x1F;
}
