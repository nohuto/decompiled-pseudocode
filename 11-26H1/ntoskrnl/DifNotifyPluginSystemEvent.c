/*
 * XREFs of DifNotifyPluginSystemEvent @ 0x1404CFE80
 * Callers:
 *     IovLogIrpMdlEvent @ 0x140533384 (IovLogIrpMdlEvent.c)
 *     IovLogNulledMdl @ 0x140646190 (IovLogNulledMdl.c)
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 *     VfPtFreePoolNotification @ 0x140C4AF8C (VfPtFreePoolNotification.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifNotifyPluginSystemEvent(int a1, __int128 *a2)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-10h]

  if ( !a1 || a2 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 != 1 )
            return;
          v6 = a2[1];
          v8 = *a2;
          v7 = a2[2];
          v9 = v6;
          v10 = v7;
        }
        else
        {
          *(_QWORD *)&v9 = *((_QWORD *)a2 + 6);
          *((_QWORD *)&v8 + 1) = (char *)a2 + 88;
          *((_QWORD *)&v9 + 1) = *((unsigned int *)a2 + 16);
          LODWORD(v10) = *((_DWORD *)a2 + 39);
          DWORD1(v10) = *((_DWORD *)a2 + 30);
          LODWORD(v8) = 2;
        }
      }
      else
      {
        v9 = *a2;
        DWORD2(v10) = *((_DWORD *)a2 + 4);
        LODWORD(v8) = 1;
      }
    }
    v4 = &DifPluginSettings;
    v5 = 64LL;
    do
    {
      if ( *v4 )
      {
        if ( *(_QWORD *)(*v4 + 16) )
          guard_dispatch_icall_no_overrides(&v8, a2);
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
}
