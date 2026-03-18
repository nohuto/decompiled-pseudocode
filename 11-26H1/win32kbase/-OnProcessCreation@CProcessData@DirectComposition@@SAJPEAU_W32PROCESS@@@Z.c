/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x14010F0C0
 * Callers:
 *     DCompositionProcessCallout @ 0x14010F050 (DCompositionProcessCallout.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x14010F098 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F148 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F1DC (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rbx
  int v4; // edi

  v2 = (struct DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInitImpl((int)a1, 0x48uLL, 0x64704344u);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -1073741801;
LABEL_7:
    v3 = 0LL;
    goto LABEL_5;
  }
  memset(v2, 0, 0x48uLL);
  v4 = DirectComposition::CConnection::OnProcessCreation(v3);
  if ( v4 >= 0 )
    v4 = DirectComposition::CChannel::OnProcessCreation(v3);
  if ( v4 < 0 )
  {
    DirectComposition::CProcessData::`scalar deleting destructor'(v3);
    goto LABEL_7;
  }
LABEL_5:
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v4;
}
