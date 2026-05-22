/*
 * XREFs of ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18018590C
 * Callers:
 *     ?SetInterfacePath@BamoDockableDevicePrincipal@@UEAAJPEBG@Z @ 0x1801858C0 (-SetInterfacePath@BamoDockableDevicePrincipal@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$reset@PEAG@?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z @ 0x180116E38 (--$reset@PEAG@-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x18011836C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?LogSetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x180183868 (-LogSetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z.c)
 *     ?UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801862CC (-UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::SetInterfacePath(
        void **this,
        Microsoft::BamoImpl::Util *a2,
        unsigned __int16 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rbx
  int updated; // eax
  unsigned int v10; // esi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const struct std::nothrow_t *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  v5 = Microsoft::BamoImpl::Util::CopyString(a2, (unsigned __int16 *)&v13, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::reset<unsigned short *>(
      this + 5,
      v13);
    BamoImpl::BamoDockableDevicePrincipalImpl::LogSetInterfacePath(
      (BamoImpl::BamoDockableDevicePrincipalImpl *)this,
      (const unsigned __int16 *)a2);
    for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)this[4];
          i;
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 5) )
    {
      if ( *((_BYTE *)i + 56) )
      {
        updated = BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCacheStatic(
                    i,
                    (struct BamoImpl::BamoDockableDevicePrincipalImpl *)this);
        v10 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x273,
            (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)updated);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xB788,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
            (const char *)v10,
            v11);
        }
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA28,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB785,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
    return v6;
  }
}
