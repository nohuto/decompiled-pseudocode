/*
 * XREFs of _anonymous_namespace_::PointerEventIntToDigitizerContactInfo @ 0x140196E68
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x1401969A0 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall anonymous_namespace_::PointerEventIntToDigitizerContactInfo(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5)
{
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *result; // rax
  int v12; // ecx

  v7 = 0;
  *(_DWORD *)a5 = *(_DWORD *)(a1 + 12);
  *(_QWORD *)(a5 + 4) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a5 + 12) = 0LL;
  *(_QWORD *)(a5 + 20) = 0LL;
  *(_DWORD *)(a5 + 36) = 0;
  if ( a2 )
  {
    v7 = 128;
    *(_DWORD *)(a5 + 36) = 128;
  }
  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 == 2 )
  {
    *(_DWORD *)(a5 + 28) = 1;
    if ( (*(_DWORD *)(a1 + 104) & 1) != 0 )
      *(_OWORD *)(a5 + 12) = *(_OWORD *)(a1 + 112);
  }
  else if ( v8 == 3 )
  {
    *(_DWORD *)(a5 + 28) = 2;
    v12 = v7;
    if ( a3 && (*(_DWORD *)(a1 + 104) & 1) != 0 )
    {
      v12 = v7 | 0x20;
      *(_DWORD *)(a5 + 36) = v7 | 0x20;
    }
    if ( (*(_DWORD *)(a1 + 104) & 4) != 0 )
      *(_DWORD *)(a5 + 36) = v12 | 0x40;
  }
  v9 = *(_DWORD *)(a1 + 20);
  if ( (v9 & 4) != 0 )
    v10 = (a4 != 0) + 2;
  else
    v10 = ~(_BYTE)v9 & 2 | 1;
  *(_DWORD *)(a5 + 32) = v10;
  result = (_DWORD *)UPDWORDPointer(8236LL);
  if ( *result )
  {
    if ( (_GetAsyncKeyState(16LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 1u;
    if ( (_GetAsyncKeyState(17LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 2u;
    if ( (_GetAsyncKeyState(164LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 4u;
    if ( (_GetAsyncKeyState(165LL) & 0x8000u) != 0LL )
      *(_DWORD *)(a5 + 36) |= 0x10u;
    result = (_DWORD *)_GetAsyncKeyState(91LL);
    if ( (__int16)result < 0 || (result = (_DWORD *)_GetAsyncKeyState(92LL), (__int16)result < 0) )
      *(_DWORD *)(a5 + 36) |= 8u;
  }
  return result;
}
