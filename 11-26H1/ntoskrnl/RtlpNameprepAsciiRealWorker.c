/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x1404F4690
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x14080C10C (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     FindEmailAt @ 0x140621474 (FindEmailAt.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x14080C1E8 (RtlpValidateAsciiStd3AndLength.c)
 *     punycode_encode @ 0x14080C970 (punycode_encode.c)
 *     RtlNormalizeString @ 0x14080E8A0 (RtlNormalizeString.c)
 */

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        const WCHAR *a2,
        int a3,
        void *a4,
        LONG *a5,
        char a6,
        PWSTR DestinationString,
        char a8,
        void *Src,
        char a10)
{
  void *v11; // r15
  __int64 v12; // r8
  LONG *v14; // rsi
  int v15; // ebp
  char v16; // r13
  char v17; // dl
  char v18; // r12
  const WCHAR *v19; // rax
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // r8
  LONG v23; // r10d
  NTSTATUS result; // eax
  LONG v25; // ebx
  const void *v26; // rdx
  WCHAR *v27; // r13
  LONG v28; // ecx
  WCHAR *v29; // r9
  int v30; // eax
  LONG EmailAt; // eax
  LONG v32; // r11d
  bool v33; // zf
  bool v34; // zf
  WCHAR v35; // ax
  WCHAR v36; // cx
  bool v37; // cc
  void *v38; // r14
  LONG v39; // edi
  __int64 v40; // rax
  LONG v41; // [rsp+30h] [rbp-38h]
  int v42; // [rsp+34h] [rbp-34h]
  LONG DestinationStringLength; // [rsp+78h] [rbp+10h] BYREF

  v11 = a4;
  v12 = 0LL;
  if ( a2 )
  {
    if ( a3 >= -1 )
    {
      v14 = a5;
      if ( a5 )
      {
        v15 = *a5;
        if ( *a5 >= 0 && (v15 <= 0 || a4) && (a1 & 0xFFFFFFF8) == 0 )
        {
          a8 = 0;
          v16 = 0;
          v42 = a1 & 1;
          DestinationStringLength = a1 & 4;
          v17 = DestinationStringLength != 0;
          v18 = (a1 & 2) != 0;
          a10 = DestinationStringLength != 0;
          if ( a3 != -1 )
          {
LABEL_14:
            if ( a3 > 0 && !a2[a3 - 1] )
            {
              v16 = 1;
              --a3;
              a8 = 1;
            }
            LOBYTE(v12) = v17;
            LOBYTE(a4) = v18;
            v21 = RtlpValidateAsciiStd3AndLength(a2, (unsigned int)a3, v12, a4);
            v23 = 0;
            if ( v21 )
            {
              if ( !a3 )
                return -1073740010;
              v25 = a3 + 1;
              if ( !v16 )
                v25 = a3;
              if ( !v11 || !v15 )
                goto LABEL_27;
              if ( v25 <= v15 )
              {
                v26 = a2;
LABEL_26:
                memmove(v11, v26, 2LL * v25);
LABEL_27:
                *v14 = v25;
                return 0;
              }
              goto LABEL_75;
            }
            v27 = DestinationString;
            v28 = 511;
            v29 = DestinationString;
            v30 = 0;
            v25 = 0;
            if ( !DestinationStringLength )
              goto LABEL_34;
            EmailAt = FindEmailAt(a2, (unsigned int)a3, v22, DestinationString);
            v41 = EmailAt;
            if ( !EmailAt )
              goto LABEL_51;
            DestinationStringLength = v32;
            result = RtlNormalizeString(1u, a2, EmailAt, v27, &DestinationStringLength);
            v25 = DestinationStringLength;
            v23 = 0;
            v33 = result == 0;
            if ( result >= 0 )
            {
              if ( DestinationStringLength )
              {
                v30 = v41;
                v29 = &v27[DestinationStringLength];
                v28 = 511 - DestinationStringLength;
LABEL_34:
                if ( v30 >= a3 )
                {
LABEL_38:
                  if ( v25 > 0 )
                  {
                    v35 = v27[v25 - 1];
                    if ( v35 == 46 )
                    {
                      v36 = a2[a3 - 1];
                      if ( v36 != 46 && v36 != 12290 && v36 != 0xFF0E && v36 != 0xFF61 )
                        goto LABEL_51;
                    }
                    else if ( !v35 )
                    {
                      goto LABEL_51;
                    }
                  }
                  v38 = Src;
                  DestinationStringLength = 515;
                  result = punycode_encode(v27, a10, v18);
                  v39 = DestinationStringLength;
                  v23 = 0;
                  if ( !DestinationStringLength )
                    goto LABEL_52;
                  if ( !a6 )
                  {
                    if ( a8 )
                    {
                      if ( v25 > 511 )
                        goto LABEL_51;
                      v40 = v25++;
                      v27[v40] = 0;
                    }
                    if ( !v11 || !v15 )
                      goto LABEL_27;
                    if ( v25 <= v15 )
                    {
                      v26 = v27;
                      goto LABEL_26;
                    }
                    goto LABEL_75;
                  }
                  if ( !a8 )
                  {
LABEL_64:
                    if ( v11 && v15 )
                    {
                      if ( v39 > v15 )
                      {
LABEL_75:
                        result = -1073741789;
                        goto LABEL_52;
                      }
                      memmove(v11, v38, 2LL * v39);
                    }
                    *v14 = v39;
                    return 0;
                  }
                  if ( DestinationStringLength < 515 )
                  {
                    *((_WORD *)v38 + DestinationStringLength) = 0;
                    ++v39;
                    goto LABEL_64;
                  }
LABEL_51:
                  result = -1073740010;
                  goto LABEL_52;
                }
                DestinationStringLength = v28;
                result = RtlNormalizeString(((v42 ^ 1) << 8) + 13, &a2[v30], a3 - v30, v29, &DestinationStringLength);
                v23 = 0;
                v34 = result == 0;
                if ( result >= 0 )
                {
                  if ( DestinationStringLength )
                  {
                    v25 += DestinationStringLength;
                    goto LABEL_38;
                  }
                  v34 = result == 0;
                }
                if ( v34 || result == -1073741789 || result == -1073740009 )
                  goto LABEL_51;
                v37 = DestinationStringLength <= 0;
LABEL_50:
                if ( v37 )
                {
LABEL_52:
                  *v14 = v23;
                  return result;
                }
                goto LABEL_51;
              }
              v33 = result == 0;
            }
            if ( v33 || result == -1073741789 || result == -1073740009 )
              goto LABEL_51;
            v37 = DestinationStringLength <= 0;
            goto LABEL_50;
          }
          v19 = a2;
          v20 = 0x7FFFFFFFLL;
          do
          {
            if ( !*v19 )
              break;
            ++v19;
            --v20;
          }
          while ( v20 );
          if ( v20 )
          {
            v17 = a10;
            a3 = v20 != 0 ? 0x7FFFFFFF - v20 + 1 : 1;
            goto LABEL_14;
          }
        }
      }
    }
  }
  return -1073741811;
}
