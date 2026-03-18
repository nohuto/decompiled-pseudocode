/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400E8938
 * Callers:
 *     DCompositionProcessCallout @ 0x1400E88F0 (DCompositionProcessCallout.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1400E89C4 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1400E89EC (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1400E8A78 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rbx
  unsigned int v4; // edx
  int v5; // edi

  v2 = (struct DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInitImpl((__int64)a1, 0x48uLL, 0x64704344u);
  v3 = v2;
  if ( !v2 )
  {
    v5 = -1073741801;
LABEL_7:
    v3 = 0LL;
    goto LABEL_5;
  }
  memset(v2, 0, 0x48uLL);
  *((_BYTE *)v3 + 48) = 0;
  v5 = DirectComposition::CConnection::OnProcessCreation(v3);
  if ( v5 >= 0 )
    v5 = DirectComposition::CChannel::OnProcessCreation(v3);
  if ( v5 < 0 )
  {
    DirectComposition::CProcessData::`scalar deleting destructor'(v3, v4);
    goto LABEL_7;
  }
LABEL_5:
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v5;
}
