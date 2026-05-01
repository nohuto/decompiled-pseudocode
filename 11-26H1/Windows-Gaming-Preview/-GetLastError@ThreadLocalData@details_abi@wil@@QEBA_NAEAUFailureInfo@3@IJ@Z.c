/*
 * XREFs of ?GetLastError@ThreadLocalData@details_abi@wil@@QEBA_NAEAUFailureInfo@3@IJ@Z @ 0x18000DD60
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000EC74 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetLastError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // eax

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v6 = *((unsigned __int16 *)this + 17);
    v7 = 10 * v6;
    if ( a3 < *(_DWORD *)(v4 + 80 * v6 + 4) )
    {
      if ( !a4 )
      {
        memset_0(a2, 0, 0x98uLL);
        *((_DWORD *)a2 + 4) = *(_DWORD *)(v4 + 8 * v7 + 4);
        *((_DWORD *)a2 + 2) = *(_DWORD *)(v4 + 8 * v7 + 8);
        *((_QWORD *)a2 + 7) = *(_QWORD *)(v4 + 8 * v7 + 16);
        *((_DWORD *)a2 + 16) = *(unsigned __int16 *)(v4 + 8 * v7 + 24);
        *(_DWORD *)a2 = *(unsigned __int8 *)(v4 + 8 * v7 + 26);
        *((_QWORD *)a2 + 16) = *(_QWORD *)(v4 + 8 * v7 + 32);
        *((_QWORD *)a2 + 17) = *(_QWORD *)(v4 + 8 * v7 + 40);
        *((_QWORD *)a2 + 18) = *(_QWORD *)(v4 + 8 * v7 + 48);
        v8 = *(_QWORD *)(v4 + 8 * v7 + 56);
LABEL_5:
        *((_QWORD *)a2 + 3) = v8;
        return 1;
      }
      v10 = 0LL;
      v11 = v4 + 80LL * *((unsigned __int16 *)this + 16);
      if ( v4 != v11 )
      {
        do
        {
          if ( *(_DWORD *)(v4 + 8) == a4 )
          {
            v12 = *(_DWORD *)(v4 + 4);
            if ( v12 > a3 && (!v10 || v12 < *(_DWORD *)(v10 + 4)) )
              v10 = v4;
          }
          v4 += 80LL;
        }
        while ( v4 != v11 );
        if ( v10 )
        {
          memset_0(a2, 0, 0x98uLL);
          *((_DWORD *)a2 + 4) = *(_DWORD *)(v10 + 4);
          *((_DWORD *)a2 + 2) = *(_DWORD *)(v10 + 8);
          *((_QWORD *)a2 + 7) = *(_QWORD *)(v10 + 16);
          *((_DWORD *)a2 + 16) = *(unsigned __int16 *)(v10 + 24);
          *(_DWORD *)a2 = *(unsigned __int8 *)(v10 + 26);
          *((_QWORD *)a2 + 16) = *(_QWORD *)(v10 + 32);
          *((_QWORD *)a2 + 17) = *(_QWORD *)(v10 + 40);
          *((_QWORD *)a2 + 18) = *(_QWORD *)(v10 + 48);
          v8 = *(_QWORD *)(v10 + 56);
          goto LABEL_5;
        }
      }
    }
  }
  return 0;
}
