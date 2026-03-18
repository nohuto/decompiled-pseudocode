/*
 * XREFs of ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x18026F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x180263834 (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x18026F974 (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::EnqueueComputeScribbleOnHost(void **this, __int64 a2, struct CComputeScribble *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // r12
  char *v10; // rdi
  __int64 (__fastcall *v11)(struct CComputeScribble *, _QWORD *); // rbp
  const void *v12; // r9
  volatile signed __int32 **v13; // r10
  volatile signed __int32 *v14; // rbx
  int v15; // edx
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue((CSuperWetSource *)this);
  if ( v6 < 0 )
  {
    v7 = 436LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  memset_0(this[15], 0, 0x80uLL);
  v9 = (*(unsigned int (__fastcall **)(struct CComputeScribble *))(*(_QWORD *)a3 + 48LL))(a3);
  if ( (unsigned __int64)(v9 + 24) > 0x80 )
  {
    v6 = -2147024809;
    v7 = 446LL;
    goto LABEL_3;
  }
  v10 = (char *)this[15];
  v11 = *(__int64 (__fastcall **)(struct CComputeScribble *, _QWORD *))(*(_QWORD *)a3 + 56LL);
  gsl::details::extent_type<-1>::extent_type<-1>(v16, v9);
  if ( v16[0] == -1LL || v10 == (char *)-20LL && v16[0] )
    goto LABEL_15;
  v16[1] = v10 + 20;
  v6 = v11(a3, v16);
  if ( v6 < 0 )
  {
    v7 = 452LL;
    goto LABEL_3;
  }
  *(_QWORD *)v10 = a2 + 1;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 70);
  v10[12] = 1;
  *((_DWORD *)v10 + 4) = v9;
  v12 = this[15];
  v13 = (volatile signed __int32 **)this[14];
  if ( !v12 )
LABEL_15:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v14 = *v13;
  memcpy_0(
    (char *)*v13 + *((_DWORD *)v13 + 2) * ((unsigned int)_InterlockedExchangeAdd(*v13, 1u) % *((_DWORD *)v13 + 3)) + 8,
    v12,
    *((unsigned int *)v13 + 2));
  _InterlockedIncrement(v14 + 1);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0pxqtq_EventWriteTransfer(
      (unsigned __int8)v10[12],
      v15,
      (_DWORD)this,
      *(_QWORD *)v10,
      *((_DWORD *)v10 + 2),
      v10[12],
      *((_DWORD *)v10 + 4));
  return 0LL;
}
