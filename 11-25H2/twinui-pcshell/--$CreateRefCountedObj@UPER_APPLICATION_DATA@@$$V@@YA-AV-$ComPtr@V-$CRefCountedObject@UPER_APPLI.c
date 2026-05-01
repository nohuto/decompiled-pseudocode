/*
 * XREFs of ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x180193A14
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180086D74 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CreateRefCountedObj<PER_APPLICATION_DATA,>(__int64 *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v2[5] = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    *((_DWORD *)v2 + 10) = 0;
    *((_WORD *)v2 + 22) = 0;
    *v2 = &CRefCountedObject<PER_APPLICATION_DATA>::`vftable';
    *((_DWORD *)v2 + 12) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  *a1 = (__int64)v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
