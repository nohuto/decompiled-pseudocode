/*
 * XREFs of HUBDESC_GetNextMsOs20Descriptor @ 0x1400362F0
 * Callers:
 *     HUBMISC_InstallMsOs20RegistryProperties @ 0x140030834 (HUBMISC_InstallMsOs20RegistryProperties.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003F0C0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003F3B0 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003F830 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBDESC_GetNextMsOs20Descriptor(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v4; // rcx
  char v5; // r8
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  bool v8; // cf
  unsigned __int16 *v9; // rdx
  __int64 v10; // rax

  v4 = *a2;
  v5 = 1;
  v6 = (*a2)[1];
  v7 = *v4;
  if ( v6 == 2 || v6 == 1 )
  {
    if ( v7 < 8u )
      goto LABEL_13;
    v7 = v4[3];
    v8 = v7 < 0xCu;
  }
  else
  {
    v8 = v7 < 4u;
  }
  if ( v8 )
    goto LABEL_13;
  v9 = (unsigned __int16 *)((char *)v4 + v7);
  if ( v9 == (unsigned __int16 *)a1 )
  {
LABEL_14:
    *a2 = 0LL;
    return v5;
  }
  if ( (unsigned __int64)v9 > a1
    || (unsigned __int64)(v9 + 2) > a1
    || (v10 = *v9, (unsigned int)v10 < 4)
    || (unsigned __int64)v9 + v10 > a1 )
  {
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  *a2 = v9;
  return v5;
}
