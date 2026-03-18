/*
 * XREFs of ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F148
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x14010F0C0 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  NTSTATUS v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( !v2 )
  {
    v5 = -1073741801;
LABEL_5:
    v3 = 0LL;
    goto LABEL_3;
  }
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v5 = ExInitializeResourceLite(v3);
  if ( v5 < 0 )
  {
    GreDeleteFastMutex((char *)v3, v4, v6, v7);
    goto LABEL_5;
  }
LABEL_3:
  *((_QWORD *)a1 + 4) = v3;
  result = (unsigned int)v5;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  return result;
}
