/*
 * XREFs of ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_YCBCRSURFACE@@@Z @ 0x18014E360
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CYCbCrSurface::ProcessUpdate(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_YCBCRSURFACE *a3)
{
  char v6; // r14
  char v7; // r15
  struct CResource *Resource; // rbp
  __int64 v9; // rax
  int v10; // edi
  struct CResource *v11; // rbx
  unsigned int v12; // ebx

  v6 = 0;
  v7 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x1Fu);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x1Fu);
  v10 = *((_DWORD *)a3 + 4);
  v11 = (struct CResource *)v9;
  if ( (v9 == 0) == (Resource == 0LL) )
  {
    if ( Resource != this[9] )
    {
      CResource::RegisterNotifier((CResource *)this, Resource);
      v6 = 1;
    }
    if ( v11 != this[10] )
    {
      CResource::RegisterNotifier((CResource *)this, v11);
      v7 = 1;
    }
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
      this[9] = Resource;
    }
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
      this[10] = v11;
    }
    *((_DWORD *)this + 22) = v10;
    return 0;
  }
  else
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1Eu, 0LL);
  }
  return v12;
}
