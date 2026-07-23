/*
 * XREFs of LdrpResSearchResourceHandle @ 0x1800A976C
 * Callers:
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 *     LdrResFallbackLangList @ 0x180054C10 (LdrResFallbackLangList.c)
 *     LdrpResFileSize @ 0x1800A672C (LdrpResFileSize.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A7B80 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResReadFile @ 0x1800A96A8 (LdrpResReadFile.c)
 *     LdrpResSetFilePointer @ 0x1800A9F74 (LdrpResSetFilePointer.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpResSearchResourceHandle(
        char *FileHandle,
        int a2,
        _QWORD *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        void *a7,
        _DWORD *a8)
{
  __int16 v8; // di
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r15
  _DWORD *v13; // r13
  int v14; // r14d
  int result; // eax
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned __int16 v18; // cx
  __int64 v19; // r14
  ULONG v20; // ebx
  _DWORD *Heap_0; // rax
  int File; // edi
  _DWORD *v23; // rbx
  int v24; // edx
  unsigned int v25; // ecx
  unsigned __int64 v26; // r14
  _DWORD *v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rcx
  int v30; // ecx
  unsigned __int16 v31[2]; // [rsp+70h] [rbp-4D8h] BYREF
  int v32; // [rsp+74h] [rbp-4D4h]
  int v33; // [rsp+78h] [rbp-4D0h]
  __int64 v34; // [rsp+80h] [rbp-4C8h] BYREF
  int v35; // [rsp+88h] [rbp-4C0h]
  int v36; // [rsp+8Ch] [rbp-4BCh]
  HANDLE FileHandlea; // [rsp+90h] [rbp-4B8h]
  _DWORD *v38; // [rsp+98h] [rbp-4B0h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-4A8h] BYREF
  _QWORD *v40; // [rsp+B0h] [rbp-498h]
  void *v41; // [rsp+B8h] [rbp-490h]
  _QWORD v42[2]; // [rsp+C0h] [rbp-488h] BYREF
  unsigned __int64 *v43; // [rsp+D0h] [rbp-478h]
  unsigned __int64 *v44; // [rsp+D8h] [rbp-470h]
  _UNICODE_STRING LocaleName; // [rsp+E0h] [rbp-468h] BYREF
  int v46; // [rsp+F0h] [rbp-458h] BYREF
  unsigned __int16 v47; // [rsp+F4h] [rbp-454h]
  unsigned __int16 v48; // [rsp+F6h] [rbp-452h]
  unsigned __int16 v49; // [rsp+104h] [rbp-444h]
  __int16 v50; // [rsp+108h] [rbp-440h]
  unsigned int v51; // [rsp+164h] [rbp-3E4h]
  unsigned int v52; // [rsp+174h] [rbp-3D4h]
  unsigned int v53; // [rsp+178h] [rbp-3D0h]
  int v54; // [rsp+17Ch] [rbp-3CCh]
  unsigned int v55; // [rsp+188h] [rbp-3C0h]
  int v56; // [rsp+18Ch] [rbp-3BCh]
  _WORD v57[30]; // [rsp+200h] [rbp-348h] BYREF
  unsigned int v58; // [rsp+23Ch] [rbp-30Ch]
  unsigned __int16 v59[264]; // [rsp+240h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+450h] [rbp-F8h] BYREF

  v33 = a4;
  v40 = a3;
  v8 = a2;
  v32 = a2;
  FileHandlea = FileHandle;
  v44 = a5;
  v43 = a6;
  v41 = a7;
  v38 = a8;
  memset_thunk_772440563353939046(v57, 0, 0x40uLL);
  v34 = 0LL;
  v59[1] = 0;
  memset_thunk_772440563353939046(v59, 0, 0x206uLL);
  v39[0] = 4456514LL;
  v39[1] = L"LdrpResSearchResourceHandle Enter";
  v42[0] = 4325440LL;
  v42[1] = L"LdrpResSearchResourceHandle Exit";
  LocaleName = 0LL;
  memset_thunk_772440563353939046(Src, 0, 0xACuLL);
  v31[0] = 0;
  memset_thunk_772440563353939046(&v46, 0, 0x108uLL);
  v10 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v29 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v29 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v39, *(unsigned __int8 *)v29);
  }
  else
  {
    v12 = 2147353476LL;
  }
  v13 = 0LL;
  if ( (unsigned __int64)(FileHandle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    File = -1073741811;
    goto LABEL_53;
  }
  v14 = v8 & 0x1000;
  v35 = v14;
  result = LdrpResFileSize(FileHandle, &v34);
  if ( result < 0 && (v8 & 0x1000) != 0 )
    return result;
  result = LdrpResReadFile(FileHandle, 0LL, v57, 0x40u);
  if ( result < 0 )
    return result;
  if ( v57[0] != 23117 )
    goto LABEL_68;
  v16 = v58;
  if ( v14 )
  {
    if ( (unsigned __int64)v58 + 264 < v58
      || v58 > 0x10000000
      || v58 + 264 < v58
      || (unsigned __int64)v58 + 264 >= (unsigned int)v34 )
    {
      goto LABEL_68;
    }
  }
  result = LdrpResReadFile(FileHandle, v58, &v46, 0x108u);
  if ( result < 0 )
    return result;
  if ( v46 != 17744 )
    goto LABEL_68;
  if ( v50 != 267 )
  {
    if ( v50 != 523 || v47 != 0xAA64 && v47 != 0x8664 )
      goto LABEL_68;
    if ( v52 > 2 && v56 )
    {
      v18 = v49;
      if ( v49 < 0x88u )
        goto LABEL_68;
      v19 = v55;
      goto LABEL_18;
    }
LABEL_84:
    File = -1073741687;
    goto LABEL_53;
  }
  v17 = v47;
  if ( v47 != 332 )
  {
    if ( (unsigned __int16)(v47 - 448) > 4u )
      goto LABEL_68;
    v30 = 21;
    LOWORD(v17) = v47 - 448;
    if ( !_bittest(&v30, v17) )
      goto LABEL_68;
  }
  if ( v51 <= 2 || !v54 )
    goto LABEL_84;
  v18 = v49;
  if ( v49 < 0x78u )
    goto LABEL_68;
  v19 = v53;
LABEL_18:
  if ( !(_DWORD)v19 )
    return -1073741687;
  if ( !v48 )
    goto LABEL_68;
  v20 = 40 * v48;
  if ( v16 + v20 + v18 + 24 > (unsigned int)v34 )
    goto LABEL_68;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v20);
  v13 = Heap_0;
  v39[0] = Heap_0;
  if ( !Heap_0 )
  {
    File = -1073741801;
    goto LABEL_53;
  }
  File = LdrpResReadFile((char *)FileHandlea, v16 + 24 + v49, Heap_0, v20);
  if ( File >= 0 )
  {
    v23 = v13;
    v24 = 0;
    if ( v48 )
    {
      do
      {
        v25 = v23[3];
        if ( (unsigned int)v19 >= v25 && (unsigned int)v19 < v23[4] + v25 )
          break;
        v23 += 10;
        ++v24;
      }
      while ( v24 < v48 );
    }
    if ( v24 < v48 )
    {
      v26 = (unsigned int)v23[5] - (unsigned __int64)(unsigned int)v23[3] + v19;
      if ( v26 )
      {
        File = LdrpResSetFilePointer(FileHandlea, v26);
        if ( File >= 0 )
        {
          if ( v33 == 3 )
          {
            if ( (v32 & 0x20) != 0 )
            {
              v59[0] = 1;
              v59[2] = 0;
            }
            else
            {
              File = LdrResFallbackLangList(0LL, 0LL, *((_WORD *)v40 + 8), v32, v59);
              if ( File < 0 && v35 )
                goto LABEL_53;
            }
          }
          File = LdrpResSearchResourceInsideDirectory(
                   0LL,
                   (char *)FileHandlea,
                   (unsigned int)v34,
                   v26,
                   (__int64)&v46,
                   v23,
                   v40,
                   v33,
                   (__int64)v59,
                   v44,
                   v43,
                   v32,
                   v31);
          if ( File >= 0 )
          {
            v27 = v38;
            if ( v38 )
            {
              if ( !v31[0] )
              {
                LODWORD(v28) = 0;
                goto LABEL_48;
              }
              LocaleName.Buffer = Src;
              LocaleName.MaximumLength = 172;
              File = RtlLcidToLocaleName(v31[0], &LocaleName, 2u, 0);
              if ( File >= 0 )
              {
                v28 = -1LL;
                do
                  ++v28;
                while ( Src[v28] );
                v27 = v38;
LABEL_48:
                if ( (unsigned int)v28 < *v27 && v41 )
                {
                  memmove(v41, Src, 2LL * (unsigned int)v28);
                  *v38 = v28 + 1;
                  *((_WORD *)v41 + (unsigned int)v28) = 0;
                }
                else
                {
                  *v27 = v28 + 1;
                  File = -1073741789;
                  v36 = -1073741789;
                }
                goto LABEL_53;
              }
            }
          }
        }
        goto LABEL_53;
      }
    }
LABEL_68:
    File = -1073741701;
  }
LABEL_53:
  if ( v13 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v13);
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v42, *(unsigned __int8 *)v12);
  }
  return File;
}
