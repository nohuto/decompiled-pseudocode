/*
 * XREFs of RaWmiIrpRegisterRequest @ 0x1401B9580
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpRegisterRequest(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  unsigned int *v3; // rsi
  __int64 v5; // r12
  NTSTATUS v6; // r14d
  char v7; // r15
  int v8; // eax
  char v9; // bl
  __int64 v10; // rax
  char v11; // bl
  const void **DriverObjectExtension; // rax
  const void **v14; // r13
  unsigned __int64 v15; // rcx
  unsigned int v16; // r15d
  int v17; // ecx
  NTSTATUS v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // edi
  unsigned __int64 i; // rdx
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v28; // [rsp+70h] [rbp+18h]

  v2 = *(int **)(a1 + 64);
  v3 = *(unsigned int **)(a2 + 24);
  v5 = a1;
  v28 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = *v2;
  v9 = 0;
  if ( *v2 == 1094997074 )
  {
    v7 = *((_BYTE *)v2 + 531);
    v28 = *((_QWORD *)v2 + 4);
    v11 = *((_BYTE *)v2 + 104) >> 1;
    goto LABEL_14;
  }
  if ( v8 == 1314275652 )
  {
    v7 = *((_BYTE *)v2 + 323);
    v28 = *((_QWORD *)v2 + 4);
    v11 = *((_BYTE *)v2 + 144) >> 2;
LABEL_14:
    v9 = v11 & 1;
    goto LABEL_15;
  }
  if ( v8 == 1431193940 )
  {
    v10 = *((_QWORD *)v2 + 3);
    v28 = a1;
    v7 = *(_BYTE *)(v10 + 531);
    v9 = (*(_BYTE *)(v10 + 104) & 2) != 0;
    if ( !*(_DWORD *)(a2 + 8) && (v2[488] & 1) != 0 && (*((_BYTE *)v2 + 506) & 8) == 0 && *((_QWORD *)v2 + 246) )
    {
      v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v2 + 490), 1u);
      if ( v6 < 0 )
        RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 490));
      else
        *((_BYTE *)v2 + 506) |= 8u;
      v5 = a1;
    }
  }
LABEL_15:
  if ( *(_DWORD *)(a2 + 8) >= 2u )
    return 3221225485LL;
  DriverObjectExtension = (const void **)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(v5 + 8), DriverEntry);
  v14 = DriverObjectExtension;
  if ( !DriverObjectExtension )
    return 3221225473LL;
  if ( v7 && v9 )
  {
    v15 = *(unsigned int *)(a2 + 16);
    v16 = *((unsigned __int16 *)DriverObjectExtension + 20) + 2;
    if ( v15 <= (unsigned __int64)v16 + 4 )
      v17 = 4;
    else
      v17 = v15 - v16;
    *(_DWORD *)(a2 + 16) = v17;
    v18 = RaWmiPassToMiniPort(v5, 8, a2);
    v19 = *(_DWORD *)(a2 + 16);
    v6 = v18;
  }
  else
  {
    v19 = 0;
    v16 = 0;
  }
  if ( v6 == -1073741789 )
  {
LABEL_40:
    *v3 += v16;
    v19 = 4;
    v6 = -1073741789;
    goto LABEL_41;
  }
  if ( v6 >= 0 )
  {
    if ( v19 != 4 )
    {
      if ( v19 )
      {
        v20 = v19;
        *(_WORD *)((char *)v3 + v19) = *((_WORD *)v14 + 20);
        memmove((char *)v3 + v19 + 2, v14[6], *((unsigned __int16 *)v14 + 20));
        for ( i = *(_QWORD *)(a2 + 24) + *(unsigned int *)(a2 + 16); (unsigned __int64)(v3 + 6) <= i; v20 -= v26 )
        {
          v22 = v3[4];
          if ( !v22 || (unsigned __int64)&v3[8 * v22 - 2] > i )
            break;
          v23 = 0;
          v3[2] = v20;
          do
          {
            v24 = 8LL * v23;
            v25 = v3[v24 + 10];
            if ( (v25 & 0xC) != 0 )
            {
              *(_QWORD *)&v3[v24 + 12] = v28;
              v3[v24 + 10] = v25 & 0xFFFFFFD3 | 0x20;
            }
            ++v23;
          }
          while ( v23 < v3[4] );
          v26 = v3[1];
          if ( !(_DWORD)v26 )
            break;
          v3 = (unsigned int *)((char *)v3 + v26);
          i = *(_QWORD *)(a2 + 24) + *(unsigned int *)(a2 + 16);
        }
        v19 += v16;
        *v3 = v19;
      }
      goto LABEL_41;
    }
    goto LABEL_40;
  }
LABEL_41:
  *(_DWORD *)(a2 + 16) = v19;
  return (unsigned int)v6;
}
