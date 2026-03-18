/*
 * XREFs of ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1400CFC88
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1400CF0F4 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1401D0450 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline @ 0x140349FF0 (Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UmfdEscPATHOBJ_bCommonTo(
        int (*a1)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int),
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct UmfdTls *v9; // rax
  __int64 v10; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v12; // rcx
  void *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned int v16; // ebx
  unsigned __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  v18 = 0LL;
  v7 = 0;
  if ( !(unsigned int)Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (int)ULongLongMult(v4, 8uLL, &v18) >= 0 )
      goto LABEL_5;
    return 0LL;
  }
  v7 = 8 * v4;
  if ( 8 * v4 > 0xFFFFFFFF )
    return 0LL;
LABEL_5:
  v9 = UmfdTls::EnsureTls(v8);
  if ( !v9 )
    return 0LL;
  v10 = *((_QWORD *)v9 + 6);
  if ( !v10 )
    return 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline();
  v12 = v7;
  if ( !IsEnabledDeviceUsageNoInline )
    v12 = (unsigned int)v18;
  v13 = (void *)PALLOCNOZ(v12, 1801733703LL);
  if ( !v13 )
    return 0LL;
  if ( (unsigned int)Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = v7;
    v15 = v7;
  }
  else
  {
    v14 = v18;
    v15 = v18;
  }
  GreProbeAndReadFromUntrustedVa(v13, v14, a3, v15, 4uLL);
  v16 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))a1)(v10, v13, (unsigned int)v4);
  Win32FreePool(v13);
  return v16;
}
