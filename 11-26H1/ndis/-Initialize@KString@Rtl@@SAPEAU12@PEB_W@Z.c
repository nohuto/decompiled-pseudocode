/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140167120
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x140138C9C (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x14014A92C (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14014FFB0 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140167170 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(wchar_t *a1)
{
  __int64 v2; // r8
  wchar_t *v3; // rax
  int v4; // edx
  __int16 v5; // r8
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return Rtl::KString::Initialize(&v6);
  v2 = 0x7FFFLL;
  v3 = a1;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = -1073741811;
  if ( v2 )
  {
    v4 = 0;
    v5 = 2 * v2;
    v6.Buffer = a1;
    v6.Length = -2 - v5;
    v6.MaximumLength = -v5;
  }
  if ( v4 < 0 )
    return 0LL;
  else
    return Rtl::KString::Initialize(&v6);
}
