/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180411AA8
 * Callers:
 *     ?SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180241F20 (-SubscribeToServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18041E000 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x180136944 (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  char *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int UniqueContext; // eax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  std::_Ref_count_base *v10; // rcx

  v2 = (char *)operator new(0x40uLL);
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<ConnectedStandbyHelper>::`vftable';
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  UniqueContext = SHTaskPoolGetUniqueContext(v4);
  *((_QWORD *)v2 + 5) = 0LL;
  *((_DWORD *)v2 + 8) = UniqueContext;
  std::atomic<bool>::atomic<bool>((__int64)(v2 + 48), 0);
  *((_QWORD *)v2 + 7) = 0LL;
  *a1 = v2 + 16;
  a1[1] = v2;
  if ( v2 != (char *)-16LL )
  {
    v6 = *((_QWORD *)v2 + 3);
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
      v7 = (volatile signed __int32 *)a1[1];
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 )
      {
        v8 = v3;
        v9 = a1[1];
        _InterlockedIncrement(v7 + 3);
      }
      *v3 = v8;
      v10 = (std::_Ref_count_base *)v3[1];
      v3[1] = v9;
      if ( v10 )
        std::_Ref_count_base::_Decwref(v10);
      if ( v7 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
    }
  }
  return a1;
}
