/*
 * XREFs of ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180185A4C
 * Callers:
 *     ?SetPanelId@BamoDockDevicePrincipal@@UEAAJPEBG@Z @ 0x180185A00 (-SetPanelId@BamoDockDevicePrincipal@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$reset@PEAG@?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z @ 0x180116E38 (--$reset@PEAG@-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAXPEAG@Z.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x18011836C (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?LogSetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z @ 0x1801838D8 (-LogSetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEBG@Z.c)
 *     ?UpdatePanelIdRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801863B8 (-UpdatePanelIdRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Micro.c)
 */

__int64 __fastcall BamoImpl::BamoDockDevicePrincipalImpl::SetPanelId(
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
    BamoImpl::BamoDockDevicePrincipalImpl::LogSetPanelId(
      (BamoImpl::BamoDockDevicePrincipalImpl *)this,
      (const unsigned __int16 *)a2);
    for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)this[4];
          i;
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 5) )
    {
      if ( *((_BYTE *)i + 56) )
      {
        updated = BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCacheStatic(
                    i,
                    (struct BamoImpl::BamoDockDevicePrincipalImpl *)this);
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
            (void *)0xB39B,
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
      (void *)0xB581,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB398,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)v6);
    return v6;
  }
}
