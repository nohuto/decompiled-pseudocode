/*
 * XREFs of ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x18047FCD0
 * Callers:
 *     ?GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA?AV?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18047F200 (-GetThumbnailDevice@ThumbnailDeviceFactory@@UEAA-AV-$ComPtr@UIDesktopThumbnailDevice@Desktop@Mul.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18043E8E8 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??R_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@QEBA@XZ @ 0x18047ED9C (--R_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ThumbnailDeviceFactory::PreCreateThumbnailDevice(union _RTL_RUN_ONCE *this)
{
  union _RTL_RUN_ONCE *v1; // rbx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  union _RTL_RUN_ONCE *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = this;
  v1 = this + 7;
  fPending = 0;
  if ( !__std_init_once_begin_initialize(this + 7, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v2[0] = v1;
    _lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_::operator()((__int64 *)&v4);
    v2[1] = 0LL;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)v2);
  }
}
