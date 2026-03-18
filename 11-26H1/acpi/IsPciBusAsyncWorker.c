/*
 * XREFs of IsPciBusAsyncWorker @ 0x140028760
 * Callers:
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 * Callees:
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     IsPciBusAsync @ 0x140028690 (IsPciBusAsync.c)
 *     AcpipFreePciBusState @ 0x14003F90C (AcpipFreePciBusState.c)
 *     PciConfigInternal @ 0x140042C58 (PciConfigInternal.c)
 *     ACPIConvertStringDelimitation @ 0x140047DE4 (ACPIConvertStringDelimitation.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsPciBusAsyncWorker(__int64 a1, int a2, int a3, _QWORD *a4)
{
  char v5; // r15
  int v6; // esi
  __int64 *v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE *v11; // rax
  int v12; // eax
  __int64 v13; // r14
  __int64 *v14; // rbp
  const char *v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 *v18; // rbp
  unsigned int v19; // edi
  void *v20; // rcx
  void *v21; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbp
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rbp

  v5 = 0;
  v6 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a4 + 10);
  v7 = (__int64 *)*a4;
  if ( !*a4 )
    goto LABEL_2;
  if ( a2 < 0 )
    goto LABEL_2;
  v9 = *(_QWORD *)(*v7 + 104);
  if ( !v9 )
    goto LABEL_2;
  v10 = *(_QWORD *)(v9 + 8);
  if ( (v10 & 0x2000000) == 0 )
  {
    if ( (v10 & 0x100000000LL) == 0 )
    {
      v12 = *((_DWORD *)a4 + 2);
      if ( (v12 & 1) == 0 )
      {
        v13 = (__int64)(a4 + 2);
        *((_DWORD *)a4 + 2) = v12 | 1;
        a4[2] = 0LL;
        v14 = AMLIGetNamedChild(v7, 1145653343);
        if ( v14 )
        {
          v6 = ACPIGet(*a4, 1145653343, 738722310, 0LL, 0, (__int64)IsPciBusAsyncWorker, (__int64)a4, v13, 0LL);
          AMLIDereferenceHandleEx((__int64)v14);
          if ( v6 == 259 )
            return 259LL;
          if ( v6 < 0 )
          {
LABEL_22:
            v8 = (_BYTE *)a4[8];
            goto LABEL_23;
          }
        }
      }
      v15 = (const char *)a4[2];
      if ( v15 )
      {
        if ( strstr(v15, "PNP0A03") || strstr((const char *)a4[2], "PNP0A08") || strstr((const char *)a4[2], "ACPI0016") )
        {
          _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 192), a4[2], 0LL) )
            ExFreePoolWithTag((PVOID)a4[2], 0);
          _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x21u);
          a4[2] = 0LL;
          goto LABEL_38;
        }
        ExFreePoolWithTag((PVOID)a4[2], 0);
        a4[2] = 0LL;
      }
      v16 = *((_DWORD *)a4 + 2);
      if ( (v16 & 0x80u) == 0 )
      {
        v17 = (__int64 *)*a4;
        a4[3] = 0LL;
        *((_DWORD *)a4 + 2) = v16 | 0x80;
        v18 = AMLIGetNamedChild(v17, 1145652063);
        if ( v18 )
        {
          v6 = ACPIGet(
                 *a4,
                 1145652063,
                 738722055,
                 0LL,
                 0,
                 (__int64)IsPciBusAsyncWorker,
                 (__int64)a4,
                 (__int64)(a4 + 3),
                 0LL);
          AMLIDereferenceHandleEx((__int64)v18);
          if ( v6 == 259 )
            return 259LL;
          if ( v6 < 0 )
            goto LABEL_22;
        }
      }
      if ( !a4[3] )
        goto LABEL_43;
      ACPIConvertStringDelimitation();
      if ( !strstr((const char *)a4[3], "PNP0A03") && !strstr((const char *)a4[3], "PNP0A08") )
      {
        ExFreePoolWithTag((PVOID)a4[3], 0);
        a4[3] = 0LL;
LABEL_43:
        v23 = *((_DWORD *)a4 + 2);
        if ( (v23 & 8) == 0 )
        {
          *((_DWORD *)a4 + 2) = v23 | 8;
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
          {
            v24 = ACPIGet(
                    *a4,
                    1380204895,
                    -1543240702,
                    0LL,
                    0,
                    (__int64)IsPciBusAsyncWorker,
                    (__int64)a4,
                    (__int64)(a4 + 4),
                    0LL);
            v6 = v24;
            if ( v24 == 259 )
              return 259LL;
            if ( v24 < 0 )
              goto LABEL_22;
          }
          else
          {
            *((_DWORD *)a4 + 8) = *(_DWORD *)(v9 + 92);
          }
        }
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 88), 0, 0) & 0x80u) == 0 )
        {
          _InterlockedExchange((volatile __int32 *)(v9 + 92), *((_DWORD *)a4 + 8));
          _InterlockedOr((volatile signed __int32 *)(v9 + 88), 0x80u);
        }
        v25 = *((_DWORD *)a4 + 2);
        if ( (v25 & 0x20) != 0 )
          goto LABEL_57;
        v26 = *a4;
        *((_DWORD *)a4 + 2) = v25 | 0x20;
        v27 = AMLIGetParent(v26);
        v28 = v27;
        if ( !v27 )
        {
          v6 = -1073741661;
          goto LABEL_22;
        }
        v6 = IsPciBusAsync(v27, (__int64)IsPciBusAsyncWorker, (__int64)a4, (_BYTE *)a4 + 36);
        AMLIDereferenceHandleEx(v28);
        if ( v6 != 259 )
        {
          if ( v6 < 0 )
            goto LABEL_22;
LABEL_57:
          if ( !*((_BYTE *)a4 + 36) )
            goto LABEL_22;
          v29 = *((_DWORD *)a4 + 2);
          if ( (v29 & 0x40) == 0 )
          {
            v30 = *a4;
            v31 = v29 | 0x40;
            *((_DWORD *)a4 + 2) = v31;
            v32 = PciConfigInternal(
                    v31,
                    v30,
                    a3,
                    (_DWORD)a4,
                    (__int64)IsPciBusAsyncWorker,
                    (__int64)a4,
                    (__int64)(a4 + 9));
            v6 = v32;
            if ( v32 == 259 )
              return 259LL;
            if ( v32 < 0 )
              goto LABEL_22;
          }
          if ( *((_WORD *)a4 + 36) != 0xFFFF && *((_WORD *)a4 + 37) != 0xFFFF )
          {
            v33 = *((unsigned __int8 *)a4 + 86);
            if ( (_BYTE)v33 != 0xFF
              && *((_BYTE *)a4 + 83) != 0xFF
              && *((_BYTE *)a4 + 82) != 0xFF
              && *((_BYTE *)a4 + 81) != 0xFF )
            {
              v34 = v33 & 0xFFFFFF7F;
              if ( v34 == 1 || v34 == 2 )
              {
                _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
                *(_BYTE *)(v9 + 96) = *((_BYTE *)a4 + 86);
                *(_BYTE *)a4[8] = 1;
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x100000000uLL);
                v5 = 1;
                *(_BYTE *)a4[8] = 0;
              }
              v35 = AMLIGetParent(*a4);
              if ( v35 )
              {
                v36 = *(_QWORD *)(*(_QWORD *)v35 + 104LL);
                AMLIDereferenceHandleEx(v35);
                if ( v36 )
                {
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v36 + 184), 0, 0) & 1) != 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)(v9 + 88), 2u);
                    if ( v5 == 1 && (AcpiOverrideAttributes & 0x8000) != 0 )
                      _InterlockedOr64((volatile signed __int64 *)(v9 + 1008), 0x8000uLL);
                  }
                  goto LABEL_24;
                }
              }
            }
          }
          goto LABEL_22;
        }
        return 259LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x2000000uLL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 200), a4[3], 0LL) )
        ExFreePoolWithTag((PVOID)a4[3], 0);
      _InterlockedOr((volatile signed __int32 *)(v9 + 184), 0x41u);
      a4[3] = 0LL;
LABEL_38:
      v11 = (_BYTE *)a4[8];
      goto LABEL_7;
    }
LABEL_2:
    v8 = (_BYTE *)a4[8];
LABEL_23:
    *v8 = 0;
    goto LABEL_24;
  }
  v11 = (_BYTE *)a4[8];
LABEL_7:
  *v11 = 1;
LABEL_24:
  v19 = 0;
  if ( v6 != -1073741772 )
    v19 = v6;
  if ( *((_DWORD *)a4 + 10) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a4[6])(*a4, v19, 0LL, a4[7]);
  v20 = (void *)a4[2];
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (void *)a4[3];
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( *a4 )
  {
    AMLIDereferenceHandleEx(*a4);
    *a4 = 0LL;
  }
  AcpipFreePciBusState(a4);
  return v19;
}
