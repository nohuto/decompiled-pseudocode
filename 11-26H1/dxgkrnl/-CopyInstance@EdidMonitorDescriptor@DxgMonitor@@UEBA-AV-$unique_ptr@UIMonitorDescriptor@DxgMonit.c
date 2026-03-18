/*
 * XREFs of ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280530
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005EB68 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400613C0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14006D89C (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

_QWORD *__fastcall DxgMonitor::EdidMonitorDescriptor::CopyInstance(__int64 a1, _QWORD *a2)
{
  DxgMonitor::EdidMonitorDescriptor *v4; // rax
  char **v5; // rdi
  _QWORD *v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rsi
  unsigned int v13; // esi
  __int64 *v14; // r14
  void **v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // r15
  DxgMonitor::EdidMonitorDescriptor *v18; // rcx
  void *v20; // [rsp+70h] [rbp+18h] BYREF
  DxgMonitor::EdidMonitorDescriptor *v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = (DxgMonitor::EdidMonitorDescriptor *)operator new(0x20uLL, 0x4D677844u, 256LL);
  v5 = (char **)v4;
  if ( !v4 )
  {
    *a2 = 0LL;
    return a2;
  }
  *((_QWORD *)v4 + 2) = 0LL;
  v21 = v4;
  *(_QWORD *)v4 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  v6 = (_QWORD *)((char *)v4 + 24);
  *((_QWORD *)v4 + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  *((_QWORD *)v4 + 3) = 0LL;
  v7 = *(unsigned int *)(a1 + 16);
  v8 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v8 = -1LL;
  v9 = __CFADD__(v8, 8LL);
  v10 = v8 + 8;
  if ( v9 )
    v10 = -1LL;
  v11 = operator new[](v10, 0x4D677844u, 256LL);
  if ( v11 )
  {
    v12 = (char *)(v11 + 8);
    *(_QWORD *)v11 = v7;
    `vector constructor iterator'(
      (char *)(v11 + 8),
      8LL,
      (unsigned int)v7,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
  }
  else
  {
    v12 = 0LL;
  }
  wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
    v5 + 3,
    v12);
  if ( !*v6 )
  {
    *a2 = 0LL;
LABEL_19:
    v18 = (DxgMonitor::EdidMonitorDescriptor *)v5;
LABEL_20:
    DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v18, 1);
    return a2;
  }
  v13 = 0;
  *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 16);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(a1 + 20);
  while ( v13 < *(_DWORD *)(a1 + 16) )
  {
    v14 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL * v13);
    if ( v14 )
    {
      v15 = (void **)(*v6 + 8LL * v13);
      while ( v14 )
      {
        v16 = operator new(0x98uLL, 0x4D677844u, 256LL);
        v17 = (_QWORD *)v16;
        if ( !v16 )
        {
          v20 = 0LL;
          *a2 = 0LL;
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
            &v20,
            0LL);
          goto LABEL_19;
        }
        memset((void *)(v16 + 24), 0, 0x80uLL);
        v20 = v17;
        *v17 = 0LL;
        v17[1] = 0LL;
        v17[2] = 128LL;
        *((_DWORD *)v17 + 3) = *((_DWORD *)v14 + 3);
        *((_DWORD *)v17 + 2) = *((_DWORD *)v14 + 2);
        memmove(v17 + 3, v14 + 3, v14[2]);
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
          v15,
          &v20);
        v15 = (void **)*v15;
        v14 = (__int64 *)*v14;
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
          &v20,
          0LL);
      }
    }
    ++v13;
  }
  wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
    (__int64)a2,
    (__int64 *)&v21);
  v18 = v21;
  if ( v21 )
    goto LABEL_20;
  return a2;
}
