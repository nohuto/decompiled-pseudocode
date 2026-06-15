/*
 * XREFs of ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180029D60
 * Callers:
 *     ?TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180027F68 (-TsSessionIdDeleteNotify@@YAJPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::forward_list_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY____std::allocator_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY_______::remove_if__lambda_9eb6c93c26a617cd5e90003f5e6b044a___ @ 0x1800430D8 (std--forward_list_std--unique_ptr_AUDIOPROTOCOLNOTIFY_std--default_delete_AUDIOPROTOCOLNOTIFY___.c)
 */

__int64 __fastcall TsSessionDeleteNotify(struct TSSession *a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v5; // [rsp+40h] [rbp+8h] BYREF
  struct AUDIOPROTOCOLNOTIFY *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v5 = 0;
  v3[0] = &v5;
  v3[1] = &v6;
  std::forward_list_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY____std::allocator_std::unique_ptr_AUDIOPROTOCOLNOTIFY_std::default_delete_AUDIOPROTOCOLNOTIFY_______::remove_if__lambda_9eb6c93c26a617cd5e90003f5e6b044a___(
    (char *)a1 + 16,
    v3);
  if ( v5 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40D,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)0x80070490LL);
  return 2147943568LL;
}
