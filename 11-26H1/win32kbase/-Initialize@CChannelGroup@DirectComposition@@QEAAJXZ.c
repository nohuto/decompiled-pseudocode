/*
 * XREFs of ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x14019B7B4
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x140110614 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannelGroup::Initialize(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  NTSTATUS v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, sizeof(struct _ERESOURCE));
    v5 = ExInitializeResourceLite(v3);
    if ( v5 < 0 )
      GreDeleteFastMutex((char *)v3, v4, v6, v7);
    else
      *((_QWORD *)this + 7) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
