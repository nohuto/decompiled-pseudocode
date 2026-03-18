/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180094D3C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180094F18 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x1801BC2A4 (McTemplateU0qxqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v3; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // r14d
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rbp
  char v16; // r15
  CResource *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)a3 + 2);
  if ( !v3
    || v3 >= *((_DWORD *)a2 + 7)
    || (v7 = *((_DWORD *)a2 + 6) * v3, v8 = *((_QWORD *)a2 + 5), v9 = (unsigned int)v7, !*(_DWORD *)(v8 + v7))
    || (v12 = *(_QWORD *)(v8 + v7 + 8)) == 0
    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 132LL)
    || (v15 = *(_QWORD *)(v8 + v9 + 8)) == 0 )
  {
    v19 = 171;
LABEL_5:
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v19, 0LL);
    return v10;
  }
  v10 = 0;
  if ( *((_DWORD *)a3 + 4) < 0x3Cu )
  {
    v19 = 176;
    goto LABEL_5;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McTemplateU0qxqq_EventWriteTransfer(
      v14,
      v13,
      *((_DWORD *)a2 + 12),
      (_DWORD)this,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2));
  v16 = (*(__int64 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 224LL))(this);
  v17 = (CResource *)*((_QWORD *)this + 31);
  if ( v17 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v17);
  *((_QWORD *)this + 31) = v15;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 8));
  v18 = *((_QWORD *)this + 16);
  *((_DWORD *)this + 64) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 65) = *((_DWORD *)a3 + 3);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 80LL))(this, 5LL);
  }
  CPrimitiveGroup::ResolveSharedMemoryBuffer(this);
  if ( v16 != (*(unsigned __int8 (__fastcall **)(CPrimitiveGroup *))(*(_QWORD *)this + 224LL))(this) )
    (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 80LL))(this, 3LL);
  return v10;
}
