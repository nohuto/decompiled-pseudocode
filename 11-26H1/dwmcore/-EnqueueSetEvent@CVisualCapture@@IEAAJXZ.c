/*
 * XREFs of ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1802863B0
 * Callers:
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180286810 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x1801D3C5C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x1802994CC (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualCapture::EnqueueSetEvent(CVisualCapture *this)
{
  __int64 v2; // rax
  HANDLE EventW; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  int v6; // r9d
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  CD3DDevice *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 286) + 40LL))(**((_QWORD **)this + 286));
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    &v10,
    v2);
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 303) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v9 = 128;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v6 = v5;
    goto LABEL_10;
  }
  v7 = CD3DDevice::EnqueueSetEvent(v10, EventW);
  v5 = v7;
  if ( v7 < 0 )
  {
    v6 = v7;
    v9 = 132;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v9, 0LL);
    goto LABEL_11;
  }
  *((_DWORD *)this + 608) = 2;
LABEL_11:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v10);
  return (unsigned int)v5;
}
