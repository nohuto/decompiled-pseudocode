/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x180032E70
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180032190 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x180103100 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x180109594 (LdrpResMapFile.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x180032024 (LdrpInitMuiCrits.c)
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 */

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  int i; // edi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 Heap_0; // rax
  int v19; // r13d
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  wchar_t **v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // [rsp+60h] [rbp+8h]

  if ( String2 )
  {
    v8 = 0LL;
    v9 = -1073741511;
    LdrpInitMuiCrits((__int64)String2, (__int64)a2);
    RtlEnterCriticalSection(&LoadAsDataCrits);
    v10 = (unsigned int)LoadAsDataTableCount;
    if ( LoadAsDataTableCount )
    {
      if ( (a4 & 0xE00) == 0 )
      {
        v11 = LoadAsDataTable;
        goto LABEL_5;
      }
      if ( a2 )
      {
        *a2 = 0LL;
        v19 = v10;
        v11 = LoadAsDataTable;
        while ( v19 )
        {
          if ( (a4 & 0x800) != 0 )
          {
            v23 = (wchar_t **)(48LL * (unsigned int)(v19 - 1) + v11);
            if ( v23[3] == String2 )
            {
              v8 = *v23;
              break;
            }
          }
          else if ( (a4 & 0x400) != 0
                 && (v26 = 48LL * (unsigned int)(v19 - 1), (v20 = *(const wchar_t **)(v26 + v11 + 8)) != 0LL) )
          {
            if ( !wcsicmp(v20, String2) )
            {
              v11 = LoadAsDataTable;
              v8 = *(wchar_t **)(v26 + LoadAsDataTable);
              v10 = (unsigned int)LoadAsDataTableCount;
              break;
            }
            v10 = (unsigned int)LoadAsDataTableCount;
            v11 = LoadAsDataTable;
          }
          else if ( (a4 & 0x200) != 0 )
          {
            v21 = 48LL * (unsigned int)(v19 - 1);
            if ( *(wchar_t **)(v21 + v11) == String2 )
            {
              v8 = *(wchar_t **)(v21 + v11);
              break;
            }
          }
          --v19;
        }
        if ( v8 )
          *a2 = v8;
        if ( (a4 & 0x200000) != 0 )
        {
          if ( v8 && a3 )
          {
            v24 = 48LL * (unsigned int)(v19 - 1);
            *a3 = *(_QWORD *)(v24 + v11 + 16);
            if ( (a4 & 0x40000) != 0 )
              ++*(_DWORD *)(v24 + v11 + 32);
            v9 = 0;
          }
        }
        else
        {
          v12 = v8 == 0LL;
          if ( !v8 )
          {
LABEL_6:
            if ( v12 )
              v8 = String2;
            for ( i = v10; i; --i )
            {
              v14 = (unsigned int)(i - 1);
              v15 = 6 * v14;
              if ( *(wchar_t **)(v11 + 48 * v14) == v8 )
              {
                if ( *(_QWORD *)(v11 + 48 * v14 + 8) )
                {
                  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(v11 + 48 * v14 + 8));
                  v11 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 8 * v15 + 8) = 0LL;
                  v10 = (unsigned int)LoadAsDataTableCount;
                }
                v16 = *(_QWORD *)(v11 + 8 * v15 + 40);
                if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v16, v10);
                  v11 = LoadAsDataTable;
                  *(_QWORD *)(LoadAsDataTable + 8 * v15 + 40) = 0LL;
                  LODWORD(v10) = LoadAsDataTableCount;
                }
                if ( i != (_DWORD)v10 )
                {
                  *(_OWORD *)(v11 + 8 * v15) = *(_OWORD *)(v11 + 48LL * (unsigned int)(v10 - 1));
                  *(_OWORD *)(v11 + 8 * v15 + 16) = *(_OWORD *)(v11 + 48LL * (unsigned int)(v10 - 1) + 16);
                  *(_OWORD *)(v11 + 8 * v15 + 32) = *(_OWORD *)(v11 + 48LL * (unsigned int)(v10 - 1) + 32);
                }
                v10 = (unsigned int)(v10 - 1);
                LoadAsDataTableCount = v10;
                v17 = (unsigned int)(LoadAsDataTableBlockCount - 32);
                if ( (unsigned int)v10 < (unsigned int)v17 )
                {
                  Heap_0 = RtlReAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, LoadAsDataTable, 48 * v17);
                  v11 = Heap_0;
                  if ( !Heap_0 )
                  {
                    v9 = -1073741801;
                    goto LABEL_50;
                  }
                  LoadAsDataTable = Heap_0;
                  LoadAsDataTableBlockCount -= 32;
                  v10 = (unsigned int)LoadAsDataTableCount;
                }
                v9 = 0;
              }
            }
            goto LABEL_50;
          }
          v22 = 48LL * (unsigned int)(v19 - 1);
          if ( (int)--*(_DWORD *)(v22 + v11 + 32) <= 0 )
          {
LABEL_5:
            v12 = v8 == 0LL;
            goto LABEL_6;
          }
          v9 = -1073740024;
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection(&LoadAsDataCrits);
    return v9;
  }
  return 3221225485LL;
}
