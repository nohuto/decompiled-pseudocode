/*
 * XREFs of ?vSetRendering@DC@@QEAAXXZ @ 0x1400FF280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DC::vSetRendering(DC *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  v2 = *((_DWORD *)this + 10) & 1;
  *((_DWORD *)this + 256) = *((_DWORD *)this + 2 * v2 + 254);
  *((_DWORD *)this + 257) = *((_DWORD *)this + 2 * v2 + 255);
  *((_DWORD *)this + 262) = *((_DWORD *)this + 258);
  *((_DWORD *)this + 263) = *((_DWORD *)this + 259);
  *((_DWORD *)this + 264) = *((_DWORD *)this + 260);
  *((_DWORD *)this + 265) = *((_DWORD *)this + 261);
  *((_DWORD *)this + 10) |= 1u;
  if ( (*((_DWORD *)this + 9) & 0x4000) != 0 )
  {
    v3 = *((_QWORD *)this + 62);
    if ( *(_QWORD *)(v3 + 248) || (*(_DWORD *)(v3 + 116) & 1) != 0 )
    {
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 312) + 64LL), UserRequest, 0, 0, 0LL);
      ++*(_DWORD *)(*((_QWORD *)this + 62) + 324LL);
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(*((_QWORD *)this + 62) + 312LL) + 64LL), 0);
    }
  }
}
