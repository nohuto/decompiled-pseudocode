/*
 * XREFs of ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D3718
 * Callers:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     UMPDThreadCleanup @ 0x1400D3640 (UMPDThreadCleanup.c)
 *     NtGdiSetPUMPDOBJ @ 0x140265370 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D330C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     EngDeletePath @ 0x1400D49A0 (EngDeletePath.c)
 *     DereferenceW32ProcessEx @ 0x140113FA4 (DereferenceW32ProcessEx.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x140206E6C (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     Feature_2056530233__private_IsEnabledDeviceUsageNoInline @ 0x140337F04 (Feature_2056530233__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall UMPDOBJ::Dereference(UMPDOBJ *this)
{
  PATHOBJ *v2; // rcx
  void *v3; // rdx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  char v12; // [rsp+20h] [rbp-18h]
  struct _SURFOBJ *v13; // [rsp+40h] [rbp+8h] BYREF

  v12 = 17;
  if ( HmgRemoveObject(*(_QWORD *)this, 0LL, 1LL, 1LL, v12, 0LL) )
  {
    v2 = (PATHOBJ *)*((_QWORD *)this + 32);
    if ( v2 )
      EngDeletePath(v2);
    if ( *((_BYTE *)this + 456) )
    {
      v13 = 0LL;
      v3 = (void *)*((_QWORD *)this + 10);
      if ( v3 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v2, v3);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 80), &v13);
      }
      v4 = (void *)*((_QWORD *)this + 12);
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v2, v4);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 96), &v13);
      }
      v5 = (void *)*((_QWORD *)this + 14);
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v2, v5);
        UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 112), &v13);
      }
    }
    v6 = (void *)*((_QWORD *)this + 51);
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)this + 51) = 0LL;
    }
    if ( *((_QWORD *)this + 46) )
    {
      IsEnabledDeviceUsageNoInline = Feature_2056530233__private_IsEnabledDeviceUsageNoInline();
      v8 = *((_QWORD *)this + 46);
      v9 = (_QWORD *)*((_QWORD *)this + 49);
      if ( IsEnabledDeviceUsageNoInline )
      {
        MmUnmapViewOfSection(*v9, v8);
        DereferenceW32ProcessEx(*((_QWORD *)this + 49), 1LL);
      }
      else
      {
        MmUnmapViewOfSection(v9, v8);
      }
    }
    v10 = (void *)*((_QWORD *)this + 52);
    if ( v10 )
      Win32FreePool(v10);
    v11 = (void *)*((_QWORD *)this + 4);
    if ( v11 )
      Win32FreePool(v11);
    Win32FreePool(this);
  }
  else
  {
    DEC_SHARE_REF_CNT(this);
  }
}
