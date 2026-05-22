/*
 * XREFs of ??0?$function@$$A6AXPEAUInputInfo@@PEAK@Z@std@@QEAA@$$QEAV01@@Z @ 0x180095DB4
 * Callers:
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z @ 0x180054CC8 (--0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z.c)
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180041338 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::function<void (InputInfo *,unsigned long *)>::function<void (InputInfo *,unsigned long *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    if ( v3 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, a1);
      std::_Func_class<void,>::~_Func_class<void,>(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v3;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
