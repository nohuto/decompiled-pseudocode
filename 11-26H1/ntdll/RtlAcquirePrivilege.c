/*
 * XREFs of RtlAcquirePrivilege @ 0x1800D2850
 * Callers:
 *     LdrpMinimalMapModule @ 0x1800D2308 (LdrpMinimalMapModule.c)
 *     AcquireDebugPrivilege @ 0x18015A818 (AcquireDebugPrivilege.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpOpenThreadToken @ 0x1800D2BB0 (RtlpOpenThreadToken.c)
 *     RtlImpersonateSelfEx @ 0x1800D2C20 (RtlImpersonateSelfEx.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18015F540 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18015F760 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlAcquirePrivilege(unsigned int *a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v4; // rbp
  char v7; // si
  __int64 Heap_0; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r12
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rax
  void *v19; // rcx
  _QWORD v20[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  v21 = 0;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = a3 | 1;
  if ( (a3 & 2) == 0 )
    v7 = a3;
  Heap_0 = RtlAllocateHeap_0();
  v9 = (_QWORD *)Heap_0;
  if ( Heap_0 )
  {
    v10 = Heap_0 + 8;
    *(_QWORD *)Heap_0 = 0LL;
    *(_QWORD *)(Heap_0 + 8) = 0LL;
    *(_DWORD *)(Heap_0 + 32) = 0;
    if ( !NtCurrentTeb()->IsImpersonating )
      goto LABEL_6;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4LL, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        v20[0] = 0LL;
        NtSetInformationThread(-2LL, 5LL, v20, 8LL);
        goto LABEL_19;
      }
    }
    else
    {
      v11 = RtlpOpenThreadToken(40LL, Heap_0);
      if ( v11 >= 0 )
      {
LABEL_19:
        if ( *v9 )
          goto LABEL_9;
LABEL_6:
        if ( (v7 & 2) != 0 )
        {
          v11 = NtOpenProcessTokenEx(-1LL, 40LL, 512LL, v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 2u;
LABEL_9:
            v9[3] = v9 + 133;
            v9[2] = (char *)v9 + 36;
            *((_DWORD *)v9 + 266) = v4;
            if ( (_DWORD)v4 )
            {
              v12 = 0LL;
              v13 = v4;
              do
              {
                v14 = *a1;
                v12 += 12LL;
                v15 = v9[3];
                ++a1;
                v20[0] = v14;
                *(_QWORD *)(v12 + v15 - 8) = v14;
                *(_DWORD *)(v12 + v9[3]) = 2;
                --v13;
              }
              while ( v13 );
            }
            v21 = 1024;
            v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3], 1024LL, v9[2], &v21);
            if ( v11 == -1073741789 )
            {
              while ( 1 )
              {
                v18 = RtlAllocateHeap_0();
                v9[2] = v18;
                if ( !v18 )
                  break;
                v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3], v21, v18, &v21);
                if ( v11 != -1073741789 )
                  goto LABEL_13;
                RtlFreeHeap_0();
              }
              v11 = -1073741801;
            }
            else
            {
LABEL_13:
              if ( v11 == 262 )
              {
                if ( (_DWORD)v4 != 1 )
                  goto LABEL_15;
                v11 = -1073741727;
              }
              else if ( v11 >= 0 )
              {
LABEL_15:
                *a4 = v9;
                return 0LL;
              }
            }
            v17 = (_QWORD *)v9[2];
            if ( v17 && v17 != (_QWORD *)((char *)v9 + 36) )
              RtlFreeHeap_0();
            NtClose((HANDLE)*v9);
          }
        }
        else
        {
          v11 = RtlImpersonateSelfEx(3LL, 40LL, v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 1u;
            goto LABEL_9;
          }
        }
        if ( (v9[4] & 1) != 0 )
        {
          NtSetInformationThread(-2LL, 5LL, v10, 8LL);
          v19 = (void *)v9[1];
          if ( v19 )
            NtClose(v19);
        }
      }
    }
    RtlFreeHeap_0();
    return (unsigned int)v11;
  }
  return 3221225495LL;
}
