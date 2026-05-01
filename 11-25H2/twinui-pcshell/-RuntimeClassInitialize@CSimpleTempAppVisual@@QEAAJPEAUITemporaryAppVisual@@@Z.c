/*
 * XREFs of ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJPEAUITemporaryAppVisual@@@Z @ 0x180525A48
 * Callers:
 *     ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEAPEAUITemporaryAppVisual@@@Z @ 0x1805254A4 (--$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEAPEAUITemporaryAppVisual@@@Details@WRL@Microsof.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSimpleTempAppVisual::RuntimeClassInitialize(
        CSimpleTempAppVisual *this,
        struct ITemporaryAppVisual *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  bool v7; // zf
  void (__fastcall *v8)(struct ITemporaryAppVisual *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax

  (*(void (__fastcall **)(struct ITemporaryAppVisual *, __int64, char *))(*(_QWORD *)a2 + 24LL))(
    a2,
    1LL,
    (char *)this + 48);
  (*(void (__fastcall **)(struct ITemporaryAppVisual *, _QWORD, char *))(*(_QWORD *)a2 + 24LL))(
    a2,
    0LL,
    (char *)this + 64);
  v4 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = 0LL;
  *((_DWORD *)this + 4) = v4;
  if ( v4 == 7 )
    v6 = 0LL;
  else
    v6 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 56LL))(a2);
  v7 = *((_DWORD *)this + 4) == 1;
  *((_QWORD *)this + 4) = v6;
  if ( !v7 )
    v5 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a2 + 64LL))(a2);
  *((_QWORD *)this + 5) = v5;
  v8 = *(void (__fastcall **)(struct ITemporaryAppVisual *, GUID *, __int64 *))(*(_QWORD *)a2 + 48LL);
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)this + 3);
  v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9);
  return 0LL;
}
