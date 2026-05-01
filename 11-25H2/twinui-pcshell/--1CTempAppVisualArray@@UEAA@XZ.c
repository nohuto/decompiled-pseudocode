/*
 * XREFs of ??1CTempAppVisualArray@@UEAA@XZ @ 0x180522538
 * Callers:
 *     ??_ECTempAppVisualArray@@UEAAPEAXI@Z @ 0x1805225B0 (--_ECTempAppVisualArray@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CTempAppVisualArray::~CTempAppVisualArray(CTempAppVisualArray *this)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi

  v1 = (unsigned __int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)(*((_QWORD *)this + 2) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  *v1 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
}
