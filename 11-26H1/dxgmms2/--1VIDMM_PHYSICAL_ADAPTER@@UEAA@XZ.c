/*
 * XREFs of ??1VIDMM_PHYSICAL_ADAPTER@@UEAA@XZ @ 0x1400B3AD4
 * Callers:
 *     ??_EVIDMM_PHYSICAL_ADAPTER@@UEAAPEAXI@Z @ 0x14004F730 (--_EVIDMM_PHYSICAL_ADAPTER@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ @ 0x1400AE420 (--1VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAA@XZ.c)
 *     ??1VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA@XZ @ 0x1400B10DC (--1VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::~VIDMM_PHYSICAL_ADAPTER(VIDMM_PHYSICAL_ADAPTER *this)
{
  unsigned __int16 i; // di
  __int64 v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void *v5; // rcx
  struct _MDL *v6; // rcx

  *(_QWORD *)this = &VIDMM_PHYSICAL_ADAPTER::`vftable';
  if ( *((_QWORD *)this + 219) )
  {
    for ( i = 0; (unsigned int)i < *((_DWORD *)this + 34); *(_QWORD *)(*((_QWORD *)this + 219) + 8 * v3) = 0LL )
    {
      v3 = i;
      v4 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 219) + 8LL * i);
      if ( v4 )
        (**v4)(v4, 1LL);
      ++i;
    }
    operator delete(*((void **)this + 219));
    *((_QWORD *)this + 219) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 213);
  if ( v5 )
    MmFreeMappingAddress(v5, 0x6D4D6956u);
  v6 = (struct _MDL *)*((_QWORD *)this + 214);
  if ( v6 )
    IoFreeMdl(v6);
}
