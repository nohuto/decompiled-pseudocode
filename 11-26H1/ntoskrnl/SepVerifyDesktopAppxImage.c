/*
 * XREFs of SepVerifyDesktopAppxImage @ 0x14051E754
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x1403AE560 (SeGetTrustLabelAce.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403AF970 (SepVerifyDesktopAppxPackageName.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x140618694 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x140AA74AC (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x140AA7550 (PsReferenceProcessFilePointer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, void *a2, _DWORD *a3, char a4, _BYTE *a5)
{
  _BYTE *v5; // rsi
  void *v6; // rdi
  char v7; // r12
  __int64 TrustLabelAce; // r13
  int v12; // ebx
  int SecurityObject; // eax
  _BYTE *Pool2; // rax
  bool v15; // zf
  _BYTE v17[8]; // [rsp+30h] [rbp-D0h] BYREF
  void *v18; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v19; // [rsp+40h] [rbp-C0h]
  _BYTE *v20; // [rsp+48h] [rbp-B8h]
  _BYTE SecurityDescriptor[512]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v19 = a3;
  v7 = 0;
  v20 = a5;
  v18 = 0LL;
  *a5 = 0;
  v17[0] = 0;
  TrustLabelAce = 0LL;
  if ( !(unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
      goto LABEL_4;
    v12 = PsReferenceProcessFilePointer(a1, &v18);
    if ( v12 >= 0 )
      goto LABEL_12;
    goto LABEL_31;
  }
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
    {
LABEL_4:
      v12 = 0;
      goto LABEL_32;
    }
    v12 = PsReferenceProcessFilePointer(a1, &v18);
    if ( v12 >= 0 )
    {
      v7 = 1;
LABEL_12:
      v6 = v18;
      goto LABEL_13;
    }
LABEL_31:
    v6 = v18;
    goto LABEL_32;
  }
  if ( !a2 )
  {
    v12 = -1073741776;
    goto LABEL_32;
  }
  v6 = a2;
LABEL_13:
  LODWORD(v18) = 512;
  v5 = SecurityDescriptor;
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v12 < 0 )
    goto LABEL_32;
  SecurityObject = ObQuerySecurityObject((_DWORD)v6, 132, (unsigned int)SecurityDescriptor, 512, (__int64)&v18);
  if ( SecurityObject == -1073741789 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( !Pool2 )
    {
      v12 = -1073741801;
      goto LABEL_32;
    }
    v12 = RtlCreateSecurityDescriptor(Pool2, 1u);
    if ( v12 < 0 )
      goto LABEL_32;
    SecurityObject = ObQuerySecurityObject((_DWORD)v6, 132, (_DWORD)v5, (_DWORD)v18, (__int64)&v18);
  }
  if ( SecurityObject < 0 )
    goto LABEL_4;
  if ( !v5 )
  {
    v12 = -1073739509;
    goto LABEL_32;
  }
  v12 = SepVerifyDesktopAppxPackageName(v19, (__int64)v5, v17);
  if ( v12 >= 0 && a4 == 1 )
    TrustLabelAce = SeGetTrustLabelAce((__int64)v5);
  if ( v17[0] == 1 )
  {
    if ( a4 == 1 )
    {
      if ( !TrustLabelAce )
      {
        v12 = -1073740702;
        goto LABEL_32;
      }
    }
    else if ( a4 )
    {
      goto LABEL_32;
    }
    *v20 = 1;
  }
LABEL_32:
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_38;
    v15 = v7 == 0;
  }
  else
  {
    v15 = v6 == 0LL;
  }
  if ( !v15 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
LABEL_38:
  if ( v5 && v5 != SecurityDescriptor )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v12;
}
