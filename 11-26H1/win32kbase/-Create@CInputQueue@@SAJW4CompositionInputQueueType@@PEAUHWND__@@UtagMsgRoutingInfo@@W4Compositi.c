/*
 * XREFs of ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x140059530
 * Callers:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x140059438 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 * Callees:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x140059630 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CInputQueue::Create(int a1, __int64 a2, __int64 a3, int a4, char **a5)
{
  char *v9; // rax
  char *v10; // rbx
  __int128 v11; // xmm1
  int v12; // edi
  _OWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  *a5 = 0LL;
  v9 = (char *)Win32AllocPoolImpl(0x100uLL, 0x48uLL, 0x71684D49u);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 1;
    *(_QWORD *)v9 = &CInputQueue::`vftable';
    *((_DWORD *)v9 + 3) = a1;
    *((_QWORD *)v9 + 2) = 0LL;
    *(_OWORD *)(v9 + 24) = 0LL;
    *(_OWORD *)(v9 + 40) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_DWORD *)v9 + 16) = a4;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = *(_OWORD *)(a3 + 16);
    v14[0] = *(_OWORD *)a3;
    v15 = *(_QWORD *)(a3 + 32);
    v14[1] = v11;
    v12 = CInputQueue::Initialize(v10, a2, v14);
    if ( v12 < 0 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
