/*
 * XREFs of ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1801E2FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z @ 0x1805140A4 (--$UpdateSizeConstraints@_KAEAJAEAJAEAJAEAJ@JointResizeTelemetry@@SAX$$QEA_KAEAJ111@Z.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x18051516C (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 */

void __fastcall JointResize::OnSizeConstraintsQueried(
        JointResize *this,
        struct IUnknown *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  bool v10; // zf
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  struct tagSIZE v12; // [rsp+70h] [rbp+18h] BYREF
  struct tagSIZE v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v4 = *((_QWORD *)this + 16);
  v6 = *((_QWORD *)this + 17);
  while ( v4 != v6 )
  {
    if ( SHIsSameObject(*(struct IUnknown **)v4, a2) )
    {
      v11 = *(_QWORD *)(v4 + 16);
      JointResizeTelemetry::UpdateSizeConstraints<unsigned __int64,long &,long &,long &,long &>(
        (unsigned int)&v11,
        (unsigned int)&v12,
        (unsigned int)&v12.cy,
        (unsigned int)&v13,
        (__int64)&v13.cy);
      v10 = *(_BYTE *)(v4 + 64) == 0;
      *(struct tagSIZE *)(v4 + 56) = a3;
      if ( v10 )
        *(_BYTE *)(v4 + 64) = 1;
      v10 = *(_BYTE *)(v4 + 76) == 0;
      *(struct tagSIZE *)(v4 + 68) = a4;
      if ( v10 )
        *(_BYTE *)(v4 + 76) = 1;
      JointResize::ApplySizeConstraints((JointResize *)((char *)this - 88));
      return;
    }
    v4 += 96LL;
  }
}
