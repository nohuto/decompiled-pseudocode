/*
 * XREFs of ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1400E89EC
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400E8938 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // esi
  __int64 result; // rax

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -1073741801;
LABEL_5:
    v3 = 0LL;
    goto LABEL_3;
  }
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    GreDeleteFastMutex((char *)v3);
    goto LABEL_5;
  }
LABEL_3:
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)v4;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 4) = v3;
  return result;
}
