/*
 * XREFs of ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x14008F610
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x140138C9C (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     KRegKey::QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___ @ 0x14013A6EC (KRegKey--QueryValueBlob__lambda_4e383e8896c9b02b63d9444740c78be8___.c)
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x14014A33C (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x14014A4AC (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x14014A62C (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x14014A79C (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x14014A92C (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     KRegKey::QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___ @ 0x14014B1BC (KRegKey--QueryValueBlob__lambda_ccaa62be061b52f00216e46c9dac6cb5___.c)
 *     KRegKey::QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___ @ 0x14014C408 (KRegKey--QueryValueBlob__lambda_7ae2c69980d7c12487bdb6204f64cd37___.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014C91C (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1401602A0 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x140160B80 (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A220 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x140138C60 (--_V@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(
        void **a1,
        void *a2)
{
  void *v3; // rcx

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
    operator delete[](v3);
}
